-------------------------------------------------------------------------------
-- Title         : Mini Project II
-- Project       : Waveform Generation using VHDL based on Spartan 3 (XC3S400)
-------------------------------------------------------------------------------
-- Description :
-- Implements a simple waveform generator in VHDL 
-- Can generate sine, triangle and sqaure waveforms with variable frequency
-------------------------------------------------------------------------------
-- Team :
-- Oshan Pereira(7764)
-- Oren Collaco(7302)
-- Gaurav Ghuge() 
-------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity WaveGenModule1 is
    Port ( 
    	 output : out std_logic_vector(7 downto 0);			--Output to DAC
		 tx: out std_logic;											--Output UART signal	
		 clk : in std_logic;											--input clock pin
		 ws_in : in std_logic;										--input waveform select button
		 incf_in : in std_logic;									--input increase frequency button
		 decf_in : in std_logic	;									--input decrease frequency button
		 rst : in std_logic											--input reset pin
		 
           );
end WaveGenModule1;

architecture Behavioral of WaveGenModule1 is												--The signals(similar to variables) are formed using flip-flops internally
	signal clk_2hz: std_logic;
	
	signal clk_div_baud: std_logic_vector(3 downto 0);
	signal uart_tx_state: std_logic_vector(3 downto 0);
	signal tx_send: std_logic;
	signal tx_buf: std_logic;
	signal uart_tx_count: std_logic_vector(2 downto 0);
	signal uart_stop_time: std_logic_vector(3 downto 0);
	
	signal clockdivider: std_logic_vector(23 downto 0);
	signal lut_ptr: std_logic_vector(4 downto 0);
	signal counter: std_logic_vector(23 downto 0);
	signal counter_ref: std_logic_vector(23 downto 0);
	signal waveselect: std_logic_vector(1 downto 0);
	signal output_buf: std_logic_vector(7 downto 0);
	type lut_table is array(0 to 31) of natural range 0 to 255;											--Defines the length and type of array
	signal sine_lut: lut_table := (	128,152,176,198,218,234,245,253,				--look up table for sine wave
												255,253,245,234,218,198,176,152,
												128,103,79,57,37,21,10,2,
												0,2,10,21,37,57,79,103 );
	signal tri_lut: lut_table := ( 	16,32,48,64,80,96,112,128,						--Look up table for triangle wave
												143,159,175,191,207,223,239,255,
												239,223,207,191,175,159,143,128,
												112,96,80,64,48,32,16,0 );
	signal squ_lut: lut_table := (	0,0,0,0,0,0,0,0,									--Look up table for square wave
												0,0,0,0,0,0,0,0,
												170,170,170,170,170,170,170,170,
												170,170,170,170,170,170,170,170 );

begin
main_clk:process(clk, rst) 									 	--Handles clock division and increments the look up table pointer
begin																		--Start of process
	if(rst = '1') then												--If reset button is pressed then
		counter <= (others => '0');								--Initialize counter to zero
		clockdivider <= (others => '0');
		clk_2hz <= '0';
		lut_ptr <= (others => '0');
		clk_div_baud <= (others => '0');
		uart_tx_state <= (others => '0');
		uart_tx_count <= (others => '0');
		uart_stop_time <= (others => '0');
		--output_buf <= (others => '0');
	elsif (rising_edge(clk)) then									--At rising edge of the main clock
		if(clockdivider >= 1250000) then							--If clockdivider is 5,000,000 then
			clk_2hz <= not clk_2hz;									--inverter clk_2hz and reset the clockdivider
			clockdivider <= (others => '0');							
		else
			clockdivider <= clockdivider + 1;					--Else increment clockdivider
		end if;
		counter <= counter + 1;										--Increment counter(counter in this case is the clock divider for main output)
		if(counter = counter_ref) then							--If counter reaches reference value		
			counter <= (others => '0');							--Clear the counter
			lut_ptr <= lut_ptr + 1;									--Increment look up table pointer
			tx_send <= '1';
		end if;
		if(tx_send = '1') then
			clk_div_baud <= clk_div_baud + 1;
			if(clk_div_baud = 3) then
				clk_div_baud <= (others => '0');
				if(uart_tx_state = 0) then
					uart_stop_time <= uart_stop_time + 1;
					if(uart_stop_time = 0) then
						uart_tx_state <= uart_tx_state + 1;
						uart_stop_time <= (others => '0');
					end if;
				end if;
				if(uart_tx_state = 1) then
					uart_tx_count <= uart_tx_count + 1;
					if(uart_tx_count = 7) then
						uart_tx_state <= uart_tx_state + 1;
					end if;
				elsif(uart_tx_state = 2) then
					uart_stop_time <= uart_stop_time + 1;
					if(uart_stop_time = 0) then
						uart_stop_time <= (others => '0');
						uart_tx_state <= (others => '0');
						uart_tx_count <= (others => '0');
						tx_send <= '0';
					end if;
				end if;
			end if;
		end if;		
	end if;
end process main_clk;												 --Process ends here

slow_clk: process(ws_in, incf_in, decf_in, clk_2hz, rst)  -- Handles all the button presses
begin																		 -- Start of process
	if(rst = '1') then
		counter_ref <= std_logic_vector(to_unsigned(24,24));
		waveselect <= (others => '0');
	
	elsif (rising_edge(clk_2hz)) then							 --On the rising edge
		if(ws_in = '1') then 										 --If WS_IN is pressed, increment waveselect(change waveform)
		waveselect <= waveselect + 1;			
		elsif(incf_in = '1') then									 --If INCF_IN is pressed
		counter_ref <= counter_ref + 10000;						 --Increase frequency by clk/10000
		elsif(decf_in = '1') then									 --If DECF_IN is pressed
		counter_ref <= counter_ref - 10000;						 --Decrease frequency by clk/10000
		end if;
		if(waveselect = 3) then									 --If waveselect is 3, clear waveselect
			waveselect <= (others => '0');
		end if;
	end if;	
end process slow_clk;												--Process ends here

tx_out: process(tx_send, uart_tx_state, uart_tx_count)
begin
	if(tx_send = '1') then
		if(uart_tx_state = 0) then
			tx_buf <= '0';
		elsif(uart_tx_state = 1) then
			case uart_tx_count is
			when "000" => tx_buf <= output_buf(0);
			when "001" => tx_buf <= output_buf(1);
			when "010" => tx_buf <= output_buf(2);
			when "011" => tx_buf <= output_buf(3);
			when "100" => tx_buf <= output_buf(4);
			when "101" => tx_buf <= output_buf(5);
			when "110" => tx_buf <= output_buf(6);
			when "111" => tx_buf <= output_buf(7);
			when others => tx_buf <= '0';
			end case;
		elsif(uart_tx_state = 2) then
			tx_buf <= '1';
		else
			tx_buf <= '1';
		end if;
	else
		tx_buf <= '1';
	end if;
end process tx_out;


final: process(waveselect, lut_ptr)											--Outputs the required value based on waveselect and lut_ptr
begin																		--Process begins here
	case waveselect is
	when "00" => output_buf <= std_logic_vector(to_unsigned(sine_lut(conv_integer(lut_ptr)),8));		--When waveselect is 0, sine wave
	when "01" => output_buf <= std_logic_vector(to_unsigned(tri_lut(conv_integer(lut_ptr)),8));		--When waveselect is 1, triangle wave
	when "10" => output_buf <= std_logic_vector(to_unsigned(squ_lut(conv_integer(lut_ptr)),8));		--When waveselect is 2, square wave
	when others => output_buf <= (others => '0');																		-- not allowed
	end case;
	
end process final;


output <= output_buf;
tx <= tx_buf;
end Behavioral;

