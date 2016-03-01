project(db)
add_subdirectory(employee)
add_subdirectory(db)
include_directories(./db/ ./employee/)
set(src UserInterface.cpp)
add_executable(mydb ${src})
target_link_libraries(mydb db)

