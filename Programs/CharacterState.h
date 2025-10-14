#pragma once

/// <summary>
/// character base state ƒLƒƒƒ‰ƒNƒ^[‚ÌŠî‘b’l
/// </summary>
struct CharacterBaseState {
	std::string name;	// –¼‘O
	int id;				// ID
	int hp;				// HP
	int mp;				// MP
	int attack;			// UŒ‚—Í
	int defense;		// –hŒä—Í
	int speed;			// ‘¬“x
	int luck;			// ‰^
};

struct CharacterLevelState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// UŒ‚—Í
	int defense;		// –hŒä—Í
	int speed;			// ‘¬“x
	int luck;			// ‰^
};

struct CharacterChangeState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// UŒ‚—Í
	int defense;		// –hŒä—Í
	int speed;			// ‘¬“x
	int luck;			// ‰^
};