#include "include/Player.h"

PlayerSaveData* Save::Player(){
    return LT::Game().playerSaveData;
}

bool Save::IsLoaded(){
    return Player() != nullptr;
}