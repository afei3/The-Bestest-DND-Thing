#pragma once
#include <string>
#include "Enums.h"

/// <summary>
/// WOOOSH I cast fireball :)
/// </summary>
class Spell {
	int casting_time;
	int range;
	int components;

	int duration;

	bool is_concentration;

	int flat_damage;

	int damage_dice[6];

	bool is_save;

	stats save_type;

	string description;
};