open_project vhls_prj
set_top matrix_operation_wrapper

add_files -tb ../src/getCPUTime.cpp
add_files -tb ../src/tb_matrix_operation.cpp
add_files ../src/matrix_utility_class.h
add_files ../src/matrix_determinant_class.h
add_files ../src/matrix_operation_wrapper.h
add_files ../src/matrix_operation_wrapper.cpp

open_solution "solution1"
set_part {xcku040-ffva1156-2-e}
create_clock -period 10 -name default
source "../src/directives.tcl"
csim_design -ldflags {-lm -lrt}
csynth_design
#cosim_design -ldflags {-lm -lrt}
#export_design -format ip_catalog
exit

