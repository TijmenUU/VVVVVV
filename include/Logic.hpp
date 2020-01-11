#ifndef LOGIC_H
#define LOGIC_H

#include <Graphics.hpp>
#include <Game.hpp>
#include <Entity.hpp>
#include <UtilityClass.hpp>
#include <Music.hpp>
#include <Map.hpp>

void titlelogic(Game& game, UtilityClass& help, musicclass& music, mapclass& map);

void maplogic(UtilityClass& help);

void gamecompletelogic(Graphics& dwgfx, Game& game, mapclass& map, UtilityClass& help);

void gamecompletelogic2(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

void towerlogic(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

void gamelogic(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

#endif /* LOGIC_H */
