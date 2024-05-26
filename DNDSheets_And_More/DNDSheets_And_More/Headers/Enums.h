#pragma once

enum class dice_size {
	d4,
	d6,
	d8,
	d10,
	d12,
	d20
};

enum class stats {
	Strength,
	Dexterity,
	Constitution,
	Intelligence,
	Wisdom,
	Charisma
};

enum class skills {
	Acrobatics,
	Animal_Handling,
	Arcana,
	Athletics,
	Deception,
	History,
	Insight,
	Intimidation,
	Investigation,
	Medicine,
	Nature,
	Perception,
	Performance,
	Persuasion,
	Religion,
	Sleight_of_Hand,
	Stealth,
	Survival
};

enum class spell_components {
	verbal,
	somatic,
	material
};

enum class keywords {
	advantage,
	disadvantage,
	bonus_action,
	action,
	reaction,
	movement,
	saving_throw,
	proficiency,
	critical,
	magical,
};

enum class damage_types {
	bludgeoning,
	piercing,
	slashing,
	force,
	radiant,
	psychic,
	cold,
	lightning,
	acid,
	fire,
	necrosis,
	poison,
	thunder,
};

enum class conditions {
	blinded,
	charmed,
	deafened,
	frightened,
	grappled,
	incapacitated,
	invisible,
	paralyzed,
	petrified,
	poisoned,
	prone,
	restrained,
	stunned,
	unconscious,
	exhaustion,
};

enum class armor_type {
	light,
	medium,
	heavy,
	shield
};

enum class time {
	action,
	second,
	minute,
	hour,
	day,
	week,
	month
};