#ifndef INPUT_H
#define INPUT_H

#include <KeyPoll.hpp>
#include <Graphics.hpp>
#include <Game.hpp>
#include <Entity.hpp>
#include <UtilityClass.hpp>
#include <Music.hpp>
#include <Map.hpp>

void titleinput(KeyPoll& key, Graphics& dwgfx, mapclass& map, Game& game,
                entityclass& obj, UtilityClass& help, musicclass& music);

void gameinput(KeyPoll& key, Graphics& dwgfx, Game& game, mapclass& map,
               entityclass& obj, musicclass& music);

void mapinput(KeyPoll& key, Graphics& dwgfx, Game& game, mapclass& map,
              entityclass& obj, UtilityClass& help, musicclass& music);

void teleporterinput(KeyPoll& key, Graphics& dwgfx, Game& game, mapclass& map,
                     entityclass& obj);

void gamecompleteinput(KeyPoll& key, Graphics& dwgfx, Game& game, mapclass& map);

void gamecompleteinput2(KeyPoll& key, Graphics& dwgfx, Game& game, musicclass& music);

#endif /* INPUT_H */
