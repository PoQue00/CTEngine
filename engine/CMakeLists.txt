cmake_minimum_required(VERSION 3.16)

project(Custos-Turris-Engine-Raylib VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_PREFIX_PATH "C:/Users/Gavin/MSYS2/ucrt64")

find_package(raylib CONFIG REQUIRED)

add_library(Custos-Turris-Engine-Raylib main.cpp main.h core/engine.h core/engine.cpp rendering/renderer.h rendering/renderer.cpp input/input.h input/input.cpp) 
target_link_libraries(Custos-Turris-Engine-Raylib PUBLIC raylib)

find_package(Qt6 REQUIRED COMPONENTS Core)
target_link_libraries(Custos-Turris-Engine-Raylib PRIVATE Qt6::Core)