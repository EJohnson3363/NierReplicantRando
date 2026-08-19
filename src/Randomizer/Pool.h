/******************** RANDO/POOL ********************/
// Defines pool of rewards and locations that are included in randomization
//
/****************************************************/

#pragma once

#include <utility>
#include <vector>

#include "Data/Locations.h"
#include "Reward.h"

namespace Randomizer{
    class RewardPool{
    public:
        void Add(Reward reward);
        const std::vector<Reward>& GetRewards() const;

    private:
        std::vector<Reward> reward_list;
    };

    class LocationPool{
    public:
        void Add(Data::Locations::ID location);
        const std::vector<Data::Locations::ID>& GetLocations() const;

    private:
        std::vector<Data::Locations::ID> location_list;
    };
}