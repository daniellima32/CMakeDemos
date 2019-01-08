file(GLOB_RECURSE SOURCES "*.cpp")
set(PUBLIC_SOURCES ${SOURCES} PARENT_SCOPE)

add_subdirectory (subdir)