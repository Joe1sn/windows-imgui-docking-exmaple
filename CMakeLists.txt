cmake_minimum_required(VERSION 3.11)
project(example LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(extern/ImGui)

set(PROJECT_INCLUDE
    include/window/resources.h
    include/window/mainwnd.hpp
    # include/window/actions.hpp
)
set(PROJECT_SOURCE
    src/main.cpp
    src/winres.rc
    src/window/mainwnd.cpp
    # src/window/actions.cpp
    
)
set(APP_RES src/winres.rc)

# Specify MSVC UTF-8 encoding
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
link_libraries("d3d11.lib")

add_executable(${PROJECT_NAME} ${PROJECT_INCLUDE} ${PROJECT_SOURCE})
target_link_libraries(${PROJECT_NAME} PRIVATE d3d11 imgui)
target_compile_definitions(${PROJECT_NAME} PRIVATE UNICODE _UNICODE)