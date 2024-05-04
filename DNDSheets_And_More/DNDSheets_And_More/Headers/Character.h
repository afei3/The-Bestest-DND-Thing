#pragma once
#include <string>
#include <vector>
#include "Features.h"
#include "Enums.h"
#include "Spell.h"
#include "Subclass.h"
#include "Weapon.h"

using namespace std;

/// <summary>
/// Your character sheet
/// </summary>
class Character {
	
#pragma region Stats
	/// <summary>
	/// Your stats: Str, Dex, Con, Int, Wis, Cha
	/// </summary>
	int stats[6];

	/// <summary>
	/// Proficiencies
	/// </summary>
	int saving_throws[6];
	
	/// <summary>
	/// Number of inspirations
	/// </summary>
	int inspiration;

	/// <summary>
	/// Current proficiency level
	/// </summary>
	int proficiency;

	/// <summary>
	/// Your AC
	/// </summary>
	int ac;

	/// <summary>
	/// Your initiative bonus
	/// </summary>
	int initiative;

	/// <summary>
	/// Your speed
	/// </summary>
	int speed;

	/// <summary>
	/// How much you can get oofied
	/// </summary>
	int hp;

	/// <summary>
	/// How much you can currently get oofied
	/// </summary>
	int cur_hp;

	/// <summary>
	/// Yippie
	/// </summary>
	int death_saves;

	/// <summary>
	/// Yippn't
	/// </summary>
	int death_fails;

	/// <summary>
	/// Will eventually be its own class no?
	/// </summary>
	vector<string> features_and_traits;

	/// <summary>
	/// Proficiencies
	/// </summary>
	vector<string> proficiencies;

	/// <summary>
	/// Money copper, silver, electrum, gold, platinum
	/// </summary>
	int money[5];

	/// <summary>
	/// Stuff that you have
	/// </summary>
	vector<string> equipment;

	/// <summary>
	/// Your spell slots
	/// </summary>
	int spell_slots[9];

	vector<string> known_spells;

	/// <summary>
	/// IDK broski. I've never used these, but they're here because why not?
	/// </summary>
	vector<string> personality_traits;
	vector<string> ideals;
	vector<string> bonds;
	vector<string> flaws;
#pragma endregion

};