project(std_array)
message(STATUS "this is bin dir" ${std_array_BINARY_DIR})
set(SRC_LIST std_array.cpp)
add_executable(std_arry ${SRC_LIST})
