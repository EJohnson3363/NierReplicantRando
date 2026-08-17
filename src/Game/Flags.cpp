/******************** FLAGS ********************/
// Flag management for flag IDs 0-2047
//
/***********************************************/

#include "Flags.h"

// Flag management
namespace Game::Flags{
    bool FlagIsSet(uint32_t flagID){
        if(!IsFlagID(flagID)){
            return false;
        }

        return Game::API::IsGameFlag(flagID);
    }

    bool SetFlag(uint32_t flagID){
        if(!IsFlagID(flagID)){
            return false;
        }

        return Game::API::SetGameFlag(flagID);
    }

    bool IsFlagID(uint32_t flagID){
        // Invalid
        if(flagID > 2047){
            return false;
        }
        // Valid
        return true;
    }
}