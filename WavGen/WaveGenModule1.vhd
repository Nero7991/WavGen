library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity WaveGenModule1 is
    Port ( 
    		 output : out std_logic_vector(7 downto 0);
		 counter : out std_logic_vector(7 downto 0);
		 prescalar : out std_logic_vector(7 downto 0);
		 waveselect : in std_logic_vector(1 downto 0);
		 ws_in : in std_logic;
		 incf_in : in std_logic;
		 decf_in : in std_logic
           );
end WaveGenModule1;

architecture Behavioral of WaveGenModule1 is
begin

process(ws_in)
begin
 if (ws_in = '1') then
 output <="11111111";
 end if;
end process;

end Behavioral;
