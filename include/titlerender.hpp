#ifndef TITLERENDERER_H
#define TITLERENDERER_H

#include <Graphics.hpp>
#include <UtilityClass.hpp>
#include <Maths.hpp>
#include <Entity.hpp>
#include <Map.hpp>
#include <Script.hpp>

class Stage
{
public:
    int frameRate;
};

extern Stage stage;
extern Stage swfStage;
extern int temp;

void updategraphicsmode();

void titlerender(Graphics& dwgfx, mapclass& map, Game& game, UtilityClass& help, musicclass& music);

void towerrender(Graphics& dwgfx, Game& game, mapclass& map, entityclass& obj, UtilityClass& help);

void gamerender(Graphics& dwgfx, mapclass& map, Game& game, entityclass& obj, UtilityClass& help);

void maprender(Graphics& dwgfx, Game& game, mapclass& map, entityclass& obj, UtilityClass& help);

void teleporterrender(Graphics& dwgfx, Game& game, mapclass& map, entityclass& obj, UtilityClass& help);

void gamecompleterender(Graphics& dwgfx, Game& game, UtilityClass& help, mapclass& map);

void gamecompleterender2(Graphics& dwgfx, Game& game);

#endif /* TITLERENDERER_H */
