//
// Created by admin on 11/3/2020.
//

#include <stdio.h>
#include<unistd.h>
#include <string.h>
#include "Server.h"
#include"readline/readline.h"
#include"readline/history.h"
bool server_loop = true;
TCPsocket psocket;
Version ServerVer = {0,0,0,"DEV",__DATE__};
void CreateServer(const char* server_address){

}
void InitNetworking(){
    //TODO: Fix/Clarify error messages
    if(SDLNet_Init() == -1){
        printf("The network in the server failed to init because of an error!\nThe Error was %s",SDLNet_GetError());
        exit(-1);
    }
}
void StartServer(){
    IPaddress address;

    int resolve = SDLNet_ResolveHost(&address,NULL,25565);
    if(resolve == -1){
        printf("The Server failed to start because of an error\n The Error was %s",SDLNet_GetError());
        exit(-1);
    }
    psocket = SDLNet_TCP_Open(&address);
    if(!psocket){
        printf("The Server failed to start because of an error\n The Error was %s",SDLNet_GetError());
        exit(-1);
    }
}
void FileExists(const char* path){
    if(access(path,F_OK) != 0){
        printf("File doesn't exist! Creating file at %s",path);
    }
}
void ServerInput(){

    gets(current_command);

}
void ServerLoop(){
while(server_loop == true){
// printf(">");
    //rl_save_prompt();
  //  rl_message();
    //rl_restore_prompt();

    char* in = readline(">");
    rl_message("");
    //rl_forced_update_display();
    //rl_clear_message();
    if(strcmp("stop",in) == 0){
    StopServer();
    server_loop = false;
    //printf("test");
}
else if(strcmp("help",in) == 0){
    printf("Command Name\nstop\nUsage\nCloses the server and prints the command name\n");
}else if(strcmp("version",in) == 0){
    printf("");
}
else{
    printf("Unknown command!\n");
}
    if(!in)
        break;
//printf("%s", in);
}
}
TCPsocket GetTCPSocket(){
    return psocket;
}
void StopServer(){
    SDLNet_TCP_Send(psocket,"Server is going down!",strlen("Server is going down!"));
SDLNet_TCP_Close(psocket);
}
