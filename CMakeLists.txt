cmake_minimum_required(VERSION 3.11)
set(PROJECT_NAME someglfw)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(external/glfw)

# GLAD
include_directories(include)
include_directories(include/glad)

set(EXEC_SOURCES
    source/glad.c
    source/Main.cpp
)

add_executable(${PROJECT_NAME} ${EXEC_SOURCES})
target_link_libraries(${PROJECT_NAME}
    glfw
)