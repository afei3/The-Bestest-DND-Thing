#pragma once
#include "Square.h"
#include <string>

using namespace std;

class Map {
	/// <summary>
	/// Actual map
	/// </summary>
	Square** map;

	string name;

	int id;
};