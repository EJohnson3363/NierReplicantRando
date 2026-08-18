/******************** RANDO/REWARD ********************/
// Reward data (WIP)
//
/******************************************************/

#pragma once

#include <cstdint>

namespace Randomizer{
    enum class RewardType{
        Item,
        Weapon,
        Word,
        Magic,
        Flag,
        Progression
    };

    struct Reward{
        RewardType type;
        uint32_t id;
        uint32_t amount = 1;
    };
}