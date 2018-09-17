#pragma once

#include <algorithm>
#include <vector>
#include <limits>
#include "Planetoid.h"

class Map {
public:
	Map(unsigned int type);
	bool isSolid(int x, int y);
	int height();
	void explosion(Planetoid p);
	int width();
	float value(int x, int y);
private:
	inline int _index(int x, int y);
	float* _mapArray;
	int _height;
	int _width;
};