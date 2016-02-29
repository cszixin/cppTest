project(except)
message(STATUS "this is bin dir" ${std_array_BINARY_DIR})
set(SRC_LIST except.cpp)
add_executable(except ${SRC_LIST})
