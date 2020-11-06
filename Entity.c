//
// Created by admin on 11/5/2020.
//

#include "Entity.h"
void SendEntity(EntityData* entity){
    SDLNet_TCP_Send(GetTCPSocket(),entity,sizeof(&entity));
}
void SendCullsionData(){

}
void SendJump(EntityData* entityData){

}