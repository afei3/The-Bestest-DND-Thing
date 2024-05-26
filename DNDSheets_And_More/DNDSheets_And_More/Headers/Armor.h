#pragma once
#include <string>
#include "Enums.h"

using namespace std;

static int armor_id = 0;

/// <summary>
/// No oofie pls
/// </summary>
class Armor {
#pragma region Constructors
	Armor() {
		ac = 0;
		name = new string();
		type = armor_type::light;
		id = armor_id++;
		cost = 0;
		stealth_disadv = false;
		weight = 0;
		strength_req = 0;
	}

	Armor(const Armor &c_armor) {
		ac = c_armor.ac;
		name = new string(*(c_armor.name));
		type = c_armor.type;
		id = armor_id++;
		cost = c_armor.cost;
		stealth_disadv = c_armor.stealth_disadv;
		weight = c_armor.weight;
		strength_req = c_armor.strength_req;
	}

#pragma endregion

#pragma region properties
	/// <summary>
	/// Armor AC
	/// </summary>
	int ac;

	/// <summary>
	/// Armor Type - light, medium heavy
	/// </summary>
	armor_type type;

	/// <summary>
	/// Your armor name?
	/// </summary>
	string* name;

	/// <summary>
	/// Armor ID
	/// </summary>
	int id;

	/// <summary>
	/// Gold Cost
	/// </summary>
	int cost;

	/// <summary>
	/// Does armor have stealth disadvantage?
	/// </summary>
	bool stealth_disadv;

	/// <summary>
	/// How heavy armor is
	/// </summary>
	int weight;

	/// <summary>
	/// Strength Requirements
	/// </summary>
	int strength_req;
#pragma endregion

#pragma region Methods

#pragma endregion

};