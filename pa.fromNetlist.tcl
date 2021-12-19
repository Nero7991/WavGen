
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name WavGen -dir "C:/Users/orencollaco/Documents/Xilinx/WavGen/WavGen/planAhead_run_3" -part xc6slx9tqg144-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/orencollaco/Documents/Xilinx/WavGen/WavGen/WaveGenModule1.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/orencollaco/Documents/Xilinx/WavGen/WavGen} }
set_property target_constrs_file "PinImplement.ucf" [current_fileset -constrset]
add_files [list {PinImplement.ucf}] -fileset [get_property constrset [current_run]]
link_design
