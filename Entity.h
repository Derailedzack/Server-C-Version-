//
// Created by admin on 11/5/2020.
//

#ifndef SERVER_C_VERSION__ENTITY_H
#define SERVER_C_VERSION__ENTITY_H

#include <stdbool.h>
#include"Server.h"
typedef struct {
    int w;
    int h;
    int x;
    int y;
}rect;
typedef struct Size{
    float width;
    float height;
    bool Shouldscale;
    float scalewidth;
    float scaleheight;
}Size;
typedef struct {
    const char* name;
    rect Entity_Sprite;
    Size Entity_Size;
    float posX;
    float posY;
    int Enitiy_Speed_Multiplier;
    int Entity_X_Speed;
    int Entity_Y_Speed;
    int Entity_ID;
    char* Entity_CustomData;
}EntityData;
void SendEntity(EntityData* entity);
void SendCullsionData();
void SendJump(EntityData* entityData);
#endif //SERVER_C_VERSION__ENTITY_H
