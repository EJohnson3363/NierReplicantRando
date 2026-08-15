/******************** PLUGIN ********************/
// Author: Regent (GitHub user EJohnson3363)
//
// Randomizer plugin to be used with Lunar Tear
// Lunar Tear by ifa-ifa:
// https://github.com/ifa-ifa/Lunar-Tear/
//
/************************************************/

#include "Game/Game.h"
#include "Game/Inventory.h"
// Should eventually include "Randomizer" files

namespace{
    bool wasGameplayActive = false;

    void Update(void*){
        // Update state machine
        Game::UpdateGameState();

        // Call funct only when gameplay becomes active
        const bool isGameplayActive = Game::IsGameplayActive();
        if(isGameplayActive && !wasGameplayActive){
            const auto before = Game::Inventory::GetItemCount(193);
            const auto added = Game::Inventory::GiveItem(193, 10);
            const auto afterGive = Game::Inventory::GetItemCount(193);
            const auto removed = Game::Inventory::RemoveItem(193, 10);
            const auto afterRemove = Game::Inventory::GetItemCount(193);

            LT::LogInfo(
                "GiveItem: " + std::to_string(before) +
                " -> " + std::to_string(afterGive) +
                " (added " + std::to_string(added) + ")");

            LT::LogInfo(
                "RemoveItem: " + std::to_string(afterGive) +
                " -> " + std::to_string(afterRemove) +
                " (removed " + std::to_string(removed) + ")");
        }
        wasGameplayActive = isGameplayActive;

        // Wait for phase update
        LT::QueuePhaseUpdate(Update, nullptr);
    }
}


// Main runtime code
extern "C" __declspec(dllexport)
void LunarTearPluginInit(const LunarTearAPI* api, LT_PluginHandle handle){
    LT::LT_Init(api, handle);
    LT::LogInfo("=== Randomizer plugin starting ===");

    Game::Game_Init();
    LT::QueuePhaseUpdate(Update, nullptr);
}