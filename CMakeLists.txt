cmake_minimum_required(VERSION 3.10)

project(ImpactsMultiphysics)

# Use at least C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories if your headers are elsewhere
include_directories(${CMAKE_SOURCE_DIR}/Impacts
                    ${CMAKE_SOURCE_DIR}/external_libraries
)


# Add the executable and specify the source files
add_executable(ImpactsMultiphysics
    Impacts/MainImpacts.cpp
    Impacts/ImpactsMultiphysics.cpp
)