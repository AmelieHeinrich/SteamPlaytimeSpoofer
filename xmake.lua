--
-- > Notice: Floating Trees Inc. @ 2025
-- > Create Time: 2025-08-31 16:09:53
--

target("steam_playtime_spoofer")
    set_kind("binary")
    set_languages("c++17")

    add_includedirs("steam/include")
    add_linkdirs("steam/lib")
    add_links("steam_api64.lib")

    add_files("src/main.cpp")
