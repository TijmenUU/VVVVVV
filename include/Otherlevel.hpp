#pragma once

#include <Entity.hpp>
#include <Game.hpp>

#include <string>
#include <vector>

class otherlevelclass
{
public:
	enum
	{
		BLOCK = 0,
		TRIGGER,
		DAMAGE,
		DIRECTIONAL,
		SAFE,
		ACTIVITY
	};

	otherlevelclass();
	void addline(std::string t);
	std::vector<std::string> loadlevel(int rx, int ry, Game & game, entityclass & obj);

	std::string roomname;

	int roomtileset;
	int i;

	// roomtext thing in other level
	bool roomtexton;
	int roomtextx, roomtexty, roomtextnumlines;
	std::vector<std::string> roomtext;
};
