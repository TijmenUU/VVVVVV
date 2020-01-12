#pragma once
#include <Entity.hpp>
#include <Graphics.hpp>
#include <Map.hpp>
#include <Maths.hpp>
#include <Script.hpp>
#include <UtilityClass.hpp>

class Stage
{
public:
	int frameRate;
};

extern Stage stage;
extern Stage swfStage;
extern int temp;

void updategraphicsmode();

void titlerender(Graphics & dwgfx, mapclass & map, Game & game, UtilityClass & help, musicclass & music);

void towerrender(Graphics & dwgfx, Game & game, mapclass & map, entityclass & obj, UtilityClass & help);

void gamerender(Graphics & dwgfx, mapclass & map, Game & game, entityclass & obj, UtilityClass & help);

void maprender(Graphics & dwgfx, Game & game, mapclass & map, entityclass & obj, UtilityClass & help);

void teleporterrender(Graphics & dwgfx, Game & game, mapclass & map, entityclass & obj, UtilityClass & help);

void gamecompleterender(Graphics & dwgfx, Game & game, UtilityClass & help, mapclass & map);

void gamecompleterender2(Graphics & dwgfx, Game & game);
