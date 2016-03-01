aux_source_directory(. src)
include_directories(../employee/)
add_library(db ${src})
target_link_libraries(db employee)
