#include "Map.h"

Map::Map()
{
	maplist = {
		"..............."
		".....##.#......"
		"..............."
		"..............."
		"........#......"
		"..............."
		"..............."
		".........#....."
		"..............."
		"#.............."
		"#.............."
		"#.............."
		"..............."
		"..............."
		"..............."
	};
}

Map::~Map()
{
}

int Map::getWidth()
{
	return width;
}

int Map::GetHeight()
{
	return height;
}

bool Map::checkmap(int x, int y)
{
	if (maplist[0][y * width + x] != '.')
		return true;
	else
	return false;
}
