cmake_minimum_required (VERSION 2.6)
project (bindash)

# Set C++11 as required standard and enable warnings and OpenMP support
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -fopenmp")
set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Ofast -fopenmp") # Optimization and OpenMP support for release

# Add executable target. Include both main.cpp and bindash.cpp in the build
add_executable(bindash ./src/main.cpp ./src/bindash.cpp)

# Link necessary libraries
target_link_libraries(bindash -lm) # Link math library
target_link_libraries(bindash -lz) # Link zlib

# Get the latest abbreviated commit hash of the working branch
execute_process(
  COMMAND git log -1 --format=%h
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
  OUTPUT_VARIABLE GIT_COMMIT_HASH
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Get the "not version-controlled" changes with respect to the working branch
execute_process(
  COMMAND git diff HEAD --shortstat
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
  OUTPUT_VARIABLE GIT_DIFF_SHORTSTAT
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Add definitions to be used in the program for git commit hash and diff stats
add_definitions("-DGIT_COMMIT_HASH='${GIT_COMMIT_HASH}'")
add_definitions("-DGIT_DIFF_SHORTSTAT='${GIT_DIFF_SHORTSTAT}'")

#add_executable (bindash ./src/bindash.cpp)