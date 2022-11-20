cmake_minimum_required(VERSION 3.2)
set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(PROJECT_NAME "Hello")
set(PROJECT_VERSION 0.0.1)
project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} LANGUAGES C)

set(SOURCES ${SOURCE_PATH}/programMain.c
            ${SOURCE_PATH}/engine_setup.c
            ${SOURCE_PATH}/utils/window_manager.c)

#SETTING GLFW LIBRARY
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "Build the GLFW only")
set(GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
add_subdirectory(libs)

#EXECUTABLE AND TARGET LINK SETUP
set(EXECUTABLE_NAME "HELLO")
add_executable(${EXECUTABLE_NAME} ${SOURCES})
target_link_libraries(${EXECUTABLE_NAME} glad glfw)