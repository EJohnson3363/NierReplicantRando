/******************** RANDO/POOL ********************/
// Defines pool of rewards and locations that are included in randomization
//
/****************************************************/

#include "Pool.h"

namespace Randomizer{
    void RewardPool::Add(Reward reward){
        reward_list.push_back(std::move(reward));
    }

    const std::vector<Reward>& RewardPool::GetRewards() const{
        return reward_list;
    }

    void LocationPool::Add(Data::Locations::ID location){
        location_list.push_back(std::move(location));
    }

    const std::vector<Data::Locations::ID>& LocationPool::GetLocations() const{
        return location_list;
    }
}