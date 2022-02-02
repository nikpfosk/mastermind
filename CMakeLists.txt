cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(mastermind LANGUAGES CXX)

add_executable(${PROJECT_NAME} "")

set(APP_INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/include)

target_include_directories( ${PROJECT_NAME}
    PRIVATE
    ${APP_INCLUDE_DIR}
)

target_sources( ${PROJECT_NAME}
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/src/Mastermind.cpp"
)

target_compile_options(${PROJECT_NAME} PRIVATE -g -O0)

# Optional clang-tidy run if available
find_program(clang-tidy clang-tidy)
message(STATUS "clang-tidy : ${clang-tidy}")
if(NOT (clang-tidy MATCHES "NOTFOUND"))
    set(CMAKE_CXX_CLANG_TIDY "${clang-tidy}" "-checks=*")
endif()