//
// Created by admin on 11/3/2020.
//

#ifndef SERVER_C_VERSION__SERVER_H
#define SERVER_C_VERSION__SERVER_H

#include <stdbool.h>
#include"SDL_net.h"
typedef struct Server_Config{
    const char* section;
    int ip_address;
    int port;
    const char* owner_name;
    bool HasMods;
    bool CanBeModded;
}Server_Config;
typedef struct Version {
    int major;
    int minor;
    int patch;
    const char* build_type;
    const char* build_info;
}Version;
const char* current_command;
void CreateServer(const char* server_address);
void InitNetworking();
void StartServer();
void ServerInput();
TCPsocket GetTCPSocket();
//Borrowed for the client
void SendServerVersion();
void HandleDisconnection();
void HandleConnectionError();
void OnConnectFailed();
void OnConnectSuccess();
void OnDisconnection();

void FileExists(const char* path);
void FileCanWrite(const char* path);
void FileCanRead(const char* path);
void FileCanExecute(const char* path);

void ServerLoop();
void StopServer();
#endif //SERVER_C_VERSION__SERVER_H
