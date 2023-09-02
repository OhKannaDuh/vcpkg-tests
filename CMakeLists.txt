cmake_minimum_required(VERSION 3.26)

set(CMAKE_TOOLCHAIN_FILE vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

set(CMAKE_CXX_STANDARD 23)

project(Example)
add_executable(${PROJECT_NAME} src/Entry.cpp)

find_package(EnTT CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE EnTT::EnTT)

find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

find_package(stduuid CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE stduuid)
