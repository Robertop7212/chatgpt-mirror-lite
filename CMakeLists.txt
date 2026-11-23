cmake_minimum_required(VERSION 3.16)
project(chatgpt-mirror-lite CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(chatgptmirrorlite
    src/main.cpp
    src/server.cpp
    src/auth.cpp
    src/quota.cpp
)

target_include_directories(chatgptmirrorlite PRIVATE include)

if(WIN32)
    target_link_libraries(chatgptmirrorlite PRIVATE userenv)
endif()
