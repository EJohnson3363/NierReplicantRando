/******************** RANDO/STATE ********************/
// Tracks the current playthrough
//
/*****************************************************/

#pragma once

#include <unordered_set>

#include "Data/Locations.h"
#include "Reward.h"

namespace Randomizer{
    class State{
    public:
        bool IsChecked(Data::Locations::ID location) const;
        void SetChecked(Data::Locations::ID location);

        bool HasReward(const Reward& reward) const;
        void AddReward(const Reward& reward);

        void Reset();

    private:
        std::unordered_set<Data::Locations::ID> checkedLocations;
    };
}