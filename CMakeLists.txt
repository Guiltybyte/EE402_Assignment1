cmake_minimum_required(VERSION 3.17.2)
project(EE402-Assignment1
    VERSION 1.0
    DESCRIPTION "EE402 OOP design challenge assignment"
    LANGUAGES CXX
    )
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Bring in the header files from "include dir" to the build env
include_directories(include)

# GLOB is used to create a variable SOURCES which is a list of
# all the files which meet the "globbing expression"
file(GLOB SOURCES "src/*.cpp")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # generates compile_commands.json in build dir
                                      # remember to simlink it to project
                                      # root so clangd can see it
                                      # with something like:
                                      # `ln -s ~/myproject/compile_commands.json ~/myproject-build/`
add_executable(yugioh ${SOURCES})
