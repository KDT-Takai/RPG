#pragma once
#include "CharacterBase.h"

class Enemy : public CharacterBase
{
private:

public:

	Enemy(CharacterBaseState argBaseState, int level) : CharacterBase(argBaseState, level) {
	};

	~Enemy();
};