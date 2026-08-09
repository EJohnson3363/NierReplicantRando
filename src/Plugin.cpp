#include "include/Game.h"

extern "C" __declspec(dllexport)
void LunarTearPluginInit(const LunarTearAPI* api, LT_PluginHandle handle){
    LT::Initialize(api, handle);
    LT::LogInfo("=== Randomizer plugin starting ===");

    Game::Initialize();

    //char buffer[128];
    //sprintf_s(buffer, "Gold: %d", playerSaveData->gold);
    //Log(buffer);
}