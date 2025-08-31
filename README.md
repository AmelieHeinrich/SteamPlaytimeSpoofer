# Steam Playtime Spoofer

Use this tool to have a non-Steam executable contribute to the playtime of a chosen Steam game.

⚠️ This is intended for **offline / single-player use only** (e.g. legacy titles, fan games, or personal tracking).  
Do **not** use this for online or anti-cheat protected games — it could get your account flagged.

---

## Usage

1. Drop the Steamworks SDK headers/libs into the `steam/` folder.
2. In the main.cpp file, change EXE_NAME to the name of the executable you want to launch.
3. Build the project:
   ```sh
   xmake build
   ```
4. Copy the resulting steam_playtime_spoofer.exe into the target game’s folder.
5. Add a steam_appid.txt file containing the AppID of the Steam game you want to log playtime for.
6. Launch steam_playtime_spoofer.exe. It will run the target executable and report playtime to Steam under the chosen AppID.

## Disclaimer

- This project was made quickly (≈15 minutes) as a personal experiment.
- It is not affiliated with or endorsed by Valve.
- Using this with online/anti-cheat games is risky and not recommended.