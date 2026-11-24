cmake_minimum_required(VERSION 3.16)
project(gmail-ai-helper CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gmailaihelper
    src/main.cpp
    src/reader.cpp
    src/sorter.cpp
    src/drafts.cpp
    src/cli.cpp
)

target_include_directories(gmailaihelper PRIVATE include)

if(WIN32)
    target_link_libraries(gmailaihelper PRIVATE userenv)
endif()
