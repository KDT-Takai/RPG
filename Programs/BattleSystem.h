#pragma once
#include "CharacterBase.h"

class BattleSystem
{
public:
	// UŒ‚ˆ—
	void Attack(CharacterBase& argOwner, CharacterBase& argEnemy) {
		CharacterChangeState owner = argOwner.GetChangeState();
		CharacterChangeState enemy = argOwner.GetChangeState();

		int damage = owner.attack - enemy.defense;
		if (damage < 0) damage = 1;
		std::cout << argOwner.GetBaseState().name << "‚ÌUŒ‚!" << std::endl;
		std::cout << argEnemy.GetBaseState().name << "‚É" << damage << "‚Ìƒ_ƒ[ƒW!" << std::endl;
		argEnemy.Damage(damage);
	}
};