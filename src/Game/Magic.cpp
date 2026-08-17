/******************** MAGIC ********************/
// Magic I/O for magic IDs 1-10 (Nier).
// Doesn't include IDs 11 or 12, which are associated with Kainé.
//
/***********************************************/

#include "Magic.h"

namespace Game::Magic{
    bool HasMagic(uint32_t magicID){
        if(IsMagicID(magicID) == false){
            return false;
        }

        return Game::API::HasMagic(magicID);
    }

    bool GiveMagic(uint32_t magicID){
        if(IsMagicID(magicID) == false){
            return false;
        }

        return Game::API::SetMagic(magicID, true);
    }

    // Doesn't currently accept Kainé's magic
    bool IsMagicID(uint32_t magicID){
        // Invalid
        if(Game::Save::IsPlayerDataAvailable() == false || magicID > 10 || magicID < 1){
            return false;
        }
        // Valid
        return true;
    }
}