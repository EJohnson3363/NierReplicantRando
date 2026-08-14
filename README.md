(WIP) Item randomizer using Lunar Tear. Windows only.

Currently only prints save data on loading a save file. I will add a .dll to the GitHub when this is a functional mod.

## Mod instructions

1. Install [Lunar Tear](https://www.nexusmods.com/nierreplicant/mods/87) and follow its instructions to set up
2. Enable mods in the Lunar Tear .ini file
3. Download the randomizer .dll from the [current release](https://github.com/EJohnson3363/NierReplicantRando/releases)
4. Place the .dll in a directory named `NierReplicantRando/` (or preferred name) and place the directory in Lunar Tear's `mods/` directory
5. Run the game

## Build instructions

To build a .dll from the source code, you must have the Lunar Tear source code saved in a subdirectory: `NierReplicantRando/third_party/LunarTearLoader/...`

Copy and paste the following commands into cmd:

```
Remove-Item -Recurse -Force build -ErrorAction SilentlyContinue
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

The .dll will be found in: `NierReplicantRando/build/Release/NierReplicantRando.dll`