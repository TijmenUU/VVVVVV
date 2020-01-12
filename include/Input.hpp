#pragma once
#include <Entity.hpp>
#include <Game.hpp>
#include <Graphics.hpp>
#include <KeyPoll.hpp>
#include <Map.hpp>
#include <Music.hpp>
#include <UtilityClass.hpp>

void titleinput(KeyPoll & key,
 Graphics & dwgfx,
 mapclass & map,
 Game & game,
 entityclass & obj,
 UtilityClass & help,
 musicclass & music);

void gameinput(KeyPoll & key, Graphics & dwgfx, Game & game, mapclass & map, entityclass & obj, musicclass & music);

void mapinput(KeyPoll & key,
 Graphics & dwgfx,
 Game & game,
 mapclass & map,
 entityclass & obj,
 UtilityClass & help,
 musicclass & music);

void teleporterinput(KeyPoll & key, Graphics & dwgfx, Game & game, mapclass & map, entityclass & obj);

void gamecompleteinput(KeyPoll & key, Graphics & dwgfx, Game & game, mapclass & map);

void gamecompleteinput2(KeyPoll & key, Graphics & dwgfx, Game & game, musicclass & music);
