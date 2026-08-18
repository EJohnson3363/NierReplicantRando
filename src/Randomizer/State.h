/******************** RANDO/STATE ********************/
// Defines randomizer state (as opposed to game state) (WIP)
//
/******************************************************/

#pragma once

#include <cstdint>
#include <unordered_set>

namespace Randomizer{
    class State{
    public:
        bool IsChecked(uint32_t locationID) const;
        void SetChecked(uint32_t locationID);

    private:
        std::unordered_set<uint32_t> m_checkedLocations;
    };
}