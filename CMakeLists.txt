cmake_minimum_required(VERSION 3.0.0)
project(CntNonDivisible VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(googletest)
include_directories(googletest/include googlemock/include)

add_executable(CntNonDivisible main.cpp fun.cpp)
add_executable(Tests uTest.cpp fun.cpp)

target_link_libraries(Tests gtest gmock)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
