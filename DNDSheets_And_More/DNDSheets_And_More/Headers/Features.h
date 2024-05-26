#pragma once
#include<vector>
#include"Enums.h"

using namespace std;

static int feature_id;

class Feature {
#pragma region properties
	int id;

	string description;

	string name;

	vector<keywords> keywords;
#pragma endregion
};