/******************** RANDO/REWARD ********************/
// Reward data. Defines what can be given to the player
//
/******************************************************/

#pragma once

#include <cstdint>
#include <variant>

#include "third_party/Player.hpp"

namespace Randomizer{
    struct ItemReward{
        uint32_t id;
        uint8_t count = 1;
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
    };

    // Combine into a single struct
    using Reward = std::variant<ItemReward, WeaponReward, MagicReward,
                        UlothWordReward, ZarkenWordReward, FlagReward>;
}