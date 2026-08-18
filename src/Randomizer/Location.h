/******************** RANDO/LOCATION ********************/
// Location data (WIP)
//
/******************************************************/

#pragma once

#include <cstdint>

#include "Reward.h"

namespace Randomizer{
    struct Location{
        uint32_t id;
        Reward reward;
    };
}