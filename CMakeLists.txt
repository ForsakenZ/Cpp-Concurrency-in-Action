cmake_minimum_required(VERSION 3.15)
project(Cpp_Concurrency_in_Action)

set(CMAKE_CXX_STANDARD 11)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -pthread" )
add_executable(listing_1.1 listing_1.1.cpp)
add_executable(listing_2.1 listing_2.1.cpp)
add_executable(listing_2.2 listing_2.2.cpp)
add_executable(listing_2.3 listing_2.3.cpp)
add_executable(listing_2.4  listing_2.4.cpp)
add_executable(listing_2.5 listing_2.5.cpp)


#[[file(GLOB APP_SOURCES RELATIVE${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
foreach (sourcefile IN  LISTS APP_SOURCES)
    string(REPLACE ".cpp" "" program ${sourcefile})
    add_executable(${program} ${sourcefile})
endforeach (sourcefile)]]

