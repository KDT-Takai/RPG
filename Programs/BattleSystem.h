#pragma once
#include "CharacterBase.h"

class BattleSystem
{
public:
	// �U������
	void Attack(CharacterBase& argOwner, CharacterBase& argEnemy) {
		CharacterChangeState owner = argOwner.GetChangeState();
		CharacterChangeState enemy = argOwner.GetChangeState();

		int damage = owner.attack - enemy.defense;
		if (damage < 0) damage = 1;
		std::cout << argOwner.GetBaseState().name << "�̍U��!" << std::endl;
		std::cout << argEnemy.GetBaseState().name << "��" << damage << "�̃_���[�W!" << std::endl;
		argEnemy.Damage(damage);
	}
};