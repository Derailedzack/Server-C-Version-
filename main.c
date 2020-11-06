#include <stdio.h>
#include "Server.h"
#undef main
int main() {
    InitNetworking();
    StartServer();
    ServerLoop();
    //printf("Hello, World!\n");
    return 0;
}
