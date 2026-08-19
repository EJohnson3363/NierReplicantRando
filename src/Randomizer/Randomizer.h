/******************** RANDO/RANDOMIZER ********************/
// Generates a seed
//
/**********************************************************/

#pragma once

#include <unordered_set>
#include <algorithm>
#include <random>

#include "Placement.h"
#include "Pool.h"

namespace Randomizer{
    class Generator{
    public:
        explicit Generator(uint32_t seed);

        std::vector<Placement> Generate(const RewardPool& rewards,
            const LocationPool& locations, uint32_t seed);

    private:
        uint32_t seed;
    };
}