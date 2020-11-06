cmake_minimum_required(VERSION 3.17)
project(Server_C_Version_ C)

set(CMAKE_C_STANDARD 99)
include_directories(C:\\Users\\admin\\Downloads\\lua-5.4.0.tar\\lua-5.4.0\\include\\ C:\\Users\\admin\\Downloads\\SDL2-devel-2.0.12-mingw.tar\\SDL2-devel-2.0.12-mingw\\SDL2-2.0.12\\i686-w64-mingw32\\include\\SDL2  C:\\Users\\admin\\Downloads\\SDL2_net-devel-2.0.1-mingw.tar\\SDL2_net-devel-2.0.1-mingw\\SDL2_net-2.0.1\\i686-w64-mingw32\\include\\SDL2  C:\\Users\\admin\\Downloads\\glad\\include\\)
link_directories(C:\\Users\\admin\\Downloads\\SDL2-devel-2.0.12-mingw.tar\\SDL2-devel-2.0.12-mingw\\SDL2-2.0.12\\i686-w64-mingw32\\lib C:\\Users\\admin\\Downloads\\SDL2_net-devel-2.0.1-mingw.tar\\SDL2_net-devel-2.0.1-mingw\\SDL2_net-2.0.1\\i686-w64-mingw32\\lib C:\\Users\\admin\\CLionProjects\\glad\\cmake-build-debug C:\\Users\\admin\\CLionProjects\\Lua5.4\\cmake-build-debug)
link_libraries(SDL2 SDL2_net Lua5_4 glad readline)
add_executable(Server_C_Version_ main.c Server.c Server.h Entity.c Entity.h)