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
// ƒŒƒxƒ‹‰ÁZ‚µ‚½‚ÌƒXƒe[ƒ^ƒX
struct CharacterLevelState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// UŒ‚—Í
	int defense;		// –hŒä—Í
	int speed;			// ‘¬“x
	int luck;			// ‰^
};
// ƒQ[ƒ€“à‚Åbuff‚È‚Ç‚Å•Ï“®‚·‚é’l
struct CharacterChangeState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// UŒ‚—Í
	int defense;		// –hŒä—Í
	int speed;			// ‘¬“x
	int luck;			// ‰^
};