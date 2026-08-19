/******************** RANDO/STATE ********************/
// Tracks the current playthrough
//
/*****************************************************/

#include "State.h"

namespace Randomizer{
    bool State::IsChecked(Data::Locations::ID location) const{
        return checkedLocations.contains(location);
    }

    void State::SetChecked(Data::Locations::ID location){
        checkedLocations.insert(location);
    }

    void State::Reset(){
        checkedLocations.clear();
    }
}