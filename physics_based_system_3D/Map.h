#ifndef MAP_H
#define MAP_H
#include "olcPixelGameEngine.h"

class Map
{
public:
	Map();
	~Map();
	int getWidth();
	int GetHeight();
	bool checkmap(int x, int y);
private:
	std::vector<std::string> maplist;
	int width = 15;
	int height = 15;
};
#endif // !MAP_H
