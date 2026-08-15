#pragma once

#include <cstdint>

enum class RewardType{
    Item,
    Weapon,
    Word,
    Magic,
    Flag
};

struct Reward{
    RewardType type;
    uint32_t id;
    uint32_t amount = 1;
};