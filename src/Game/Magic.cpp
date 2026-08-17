/******************** MAGIC ********************/
// Magic I/O for magic IDs 1-10 (Nier) or 1-12 (Kainé)
//
// TODO:
// - HasMagic()
// - GiveMagic()
//
/***********************************************/

#include "Magic.h"

namespace Game::Magic{
    bool HasMagic(uint32_t magicID){
        return false;
    }

    void GiveMagic(uint32_t magicID){
        return;
    }

    bool IsMagicID(uint32_t magicID){
        // Invalid
        if(Game::Save::IsPlayerDataAvailable() == false || magicID > 127){
            return false;
        }
        // Valid
        return true;
    }
}