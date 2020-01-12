#pragma once
#include <Entity.hpp>
#include <Game.hpp>
#include <Graphics.hpp>
#include <Map.hpp>
#include <Music.hpp>
#include <UtilityClass.hpp>

void titlelogic(Game & game, UtilityClass & help, musicclass & music, mapclass & map);

void maplogic(UtilityClass & help);

void gamecompletelogic(Graphics & dwgfx, Game & game, mapclass & map, UtilityClass & help);

void gamecompletelogic2(Graphics & dwgfx,
 Game & game,
 entityclass & obj,
 musicclass & music,
 mapclass & map,
 UtilityClass & help);

void towerlogic(Graphics & dwgfx,
 Game & game,
 entityclass & obj,
 musicclass & music,
 mapclass & map,
 UtilityClass & help);

void gamelogic(Graphics & dwgfx,
 Game & game,
 entityclass & obj,
 musicclass & music,
 mapclass & map,
 UtilityClass & help);
