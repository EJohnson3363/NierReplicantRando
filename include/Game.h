#include "Inventory.h"
#include "Weapons.h"
#include "Words.h"

enum class State{
    Starting,
    WaitingForSave,
    Playing
};

namespace Game{
    // Init
    void Initialize();

    // Functions
    void Update();
}