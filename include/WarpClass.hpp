#ifndef WARPCLASS_H
#define WARPCLASS_H

#include <Game.hpp>
#include <Entity.hpp>

#include <string>
#include <vector>

class warpclass
{
public:
	std::vector<std::string> loadlevel(int rx, int ry , Game& game, entityclass& obj);
	std::string roomname;
	int coin, rcol;
	bool warpx, warpy;
};

#endif /* WARPCLASS_H */
