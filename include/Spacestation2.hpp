#pragma once
#include <Entity.hpp>
#include <Game.hpp>
#include <string>
#include <vector>

class spacestation2class
{
public:
	std::vector<std::string> loadlevel(int rx, int ry, Game & game, entityclass & obj);
	std::string roomname;
};
