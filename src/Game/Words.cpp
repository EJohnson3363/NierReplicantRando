/******************** WORDS ********************/
// Word I/O for word IDs 0-127
//
/***********************************************/

#include "Words.h"

namespace Game::Words{
    bool HasWord(uint32_t wordID){
        if(IsWordID(wordID) == false){
            return false;
        }

        return Game::API::HasWord(wordID);
    }

    bool GiveWord(uint32_t wordID){
        if(IsWordID(wordID) == false){
            return false;
        }

        return Game::API::SetWord(wordID, true);
    }

    bool IsWordID(uint32_t wordID){
        // Invalid
        if(Game::Save::IsPlayerDataAvailable() == false || wordID > 127){
            return false;
        }
        // Valid
        return true;
    }
}