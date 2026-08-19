/******************** RANDO/REWARD ********************/
// Reward data
// - Defines what can be given to the player
// - Grants rewards
//
/******************************************************/

#pragma once

#include <cstdint>
#include <variant>

#include "third_party/Player.hpp"
#include "Game/Inventory.h"
#include "Game/Flags.h"

namespace Randomizer{
    struct ItemReward{
        uint32_t id;
        uint8_t count = 1;

        template <typename Group>
        ItemReward(char Group::* item, uint8_t count = 1) : id(Game::Items::ToID(item)), count(count){
        }
    };

    // Define all reward types
    struct WeaponReward{
        Weapon weapon;
    };
    struct MagicReward{
        Ability magic;
    };
    struct UlothWordReward{
        Words_Uloth word;
    };
    struct ZarkenWordReward{
        Words_Zarken word;
    };
    struct FlagReward{
        uint32_t flagID;

        template <typename Group>
        FlagReward(Group flag) : flagID(Game::Flags::ToID(flag)){
        }
    };

    // Combine into a single struct
    using Reward = std::variant<ItemReward, WeaponReward, MagicReward,
                        UlothWordReward, ZarkenWordReward, FlagReward>;

    bool GiveReward(const Reward& reward);
}