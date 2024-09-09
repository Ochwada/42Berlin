cmake_minimum_required(VERSION 3.10)
project(breakout)

# Set the C standard to C11
set(CMAKE_C_STANDARD 11)

# Add the executable target
add_executable(main main.c)

# Enable compile commands generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
