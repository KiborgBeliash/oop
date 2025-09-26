cmake_minimum_required(VERSION 3.10)
project(funk)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab1_main
    funk/funk.cpp
    main.cpp
)

target_include_directories(Lab1_main PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/funk
)

add_executable(Lab1_tests
    funk/funk.cpp
    test/test.cpp
)
    
target_include_directories(Lab1_tests PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/funk
)

target_link_libraries(Lab1_tests PRIVATE gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(Lab1_tests)