cmake_minimum_required(VERSION 3.10)

project(lab1)

add_executable(main main.cpp scr/task.cpp include/task.h)
target_include_directories(main PRIVATE include)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests test/test.cpp scr/task.cpp include/task.h)
target_include_directories(tests PRIVATE include)
target_link_libraries(tests ${GTEST_LIBRARIES})
target_link_libraries(tests  gtest pthread)


enable_testing()
add_test(tests tests)
