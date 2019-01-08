project (Tutorial)

cmake_minimum_required (VERSION 3.0)

include_directories(include)
add_subdirectory (include)

add_subdirectory (src)

add_executable(Tutorial ${PUBLIC_SOURCES} ${PUBLIC_HEADERS} prog.cpp)
# Generates Tutorial.exe

#add_library(Tutorial ${PUBLIC_SOURCES} ${PUBLIC_HEADERS})
# Generates Tutorial.lib

#To Show ${PUBLIC_HEADERS}
#message ( STATUS ${PUBLIC_HEADERS} )

#To Show ${PUBLIC_SOURCES}
#message ( STATUS ${PUBLIC_SOURCES} )