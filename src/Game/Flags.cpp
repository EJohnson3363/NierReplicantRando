/******************** GAME/FLAGS ********************/
// Flag management for flag IDs 0-2047
//
// Utilizes IDs and data structures found by Acurisu:
// https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139/
//
/****************************************************/

#include "Flags.h"

// Flag management
namespace Game::Flags{
    bool IsFlagSet(uint32_t flagID){
        return Game::API::IsGameFlag(flagID);
    }

    bool SetFlag(uint32_t flagID){
        return Game::API::SetGameFlag(flagID);
    }
}