cmake_minimum_required(VERSION 3.14)
project(db-class LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(SQLITECPP_RUN_CPPLINT OFF CACHE BOOL "" FORCE)
set(SQLITECPP_RUN_CPPCHECK OFF CACHE BOOL "" FORCE)
set(SQLITECPP_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(SQLITECPP_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(third-party/sqlite-cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(db-class main.cpp)
target_link_libraries(db-class PRIVATE SQLiteCpp)
