#pragma once

#include <SDL2/SDL.h>
#include <string>
#include <vector>

int ss_toi(std::string _s);

std::vector<std::string> split(const std::string & s, char delim, std::vector<std::string> & elems);

std::vector<std::string> split(const std::string & s, char delim);

//helperClass
class UtilityClass
{
public:
	UtilityClass();

	static std::string String(int _v);

	static std::string GCString(std::vector<SDL_GameControllerButton> buttons);

	std::string twodigits(int t);

	std::string timestring(int t);

	std::string number(int _t);

	static bool intersects(SDL_Rect A, SDL_Rect B);

	void updateglow();

	int glow;
	int slowsine;
	int glowdir;
	int globaltemp;
	int temp;
	int temp2;
	std::string tempstring;
	std::vector<int> splitseconds;
};
