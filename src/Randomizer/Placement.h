/******************** RANDO/PLACEMENT ********************/
// Assigns checks to locations
// Defines the result of randomization
//
/*********************************************************/

#pragma once

#include "Data/Locations.h"
#include "Reward.h"

namespace Randomizer{
    struct Placement{
        Data::Locations::ID location;
        Reward reward;
    };
}