#pragma once


#include <Game.hpp>
#include <Entity.hpp>

#include <string>
#include <vector>

class spacestation2class
{
public:
	std::vector<std::string> loadlevel(int rx, int ry, Game& game, entityclass& obj);
	std::string roomname;
};


