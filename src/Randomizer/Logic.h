/******************** RANDO/LOGIC ********************/
// Determines which locations are reachable given current progress
//
/*****************************************************/

#pragma once

#include <unordered_set>
#include "Data/Locations.h"

namespace Randomizer{
    class Logic{
    public:
        bool CanAccess(Data::Locations::ID location) const;

        std::vector<Data::Locations::ID>
        GetReachableLocations() const;

    private:
        // progression rules
    };
}