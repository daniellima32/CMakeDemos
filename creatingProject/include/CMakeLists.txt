file(GLOB_RECURSE HEADERS "*.h")
set(PUBLIC_HEADERS ${HEADERS} PARENT_SCOPE)

add_subdirectory(subdir)