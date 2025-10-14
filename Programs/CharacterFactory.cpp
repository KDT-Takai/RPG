#include "CharacterFactory.h"

const CharacterBaseState CharacterFactory::PlayerBaseState[] = {
	CharacterBaseState{"PChara1" ,0, 1000, 45, 30, 30, 50, 13},
	CharacterBaseState{"PChara2" ,1, 2000, 42, 30, 30, 50, 13},
	CharacterBaseState{"PChara3" ,2, 2000, 20, 12, 30, 50, 13},
	CharacterBaseState{"PChara4" ,3, 2000, 28, 12, 30, 50, 13},
	CharacterBaseState{"PChara5" ,4, 2000, 25, 12, 30, 50, 13},
};

const CharacterBaseState CharacterFactory::EnemyBaseState[] = {
	CharacterBaseState{"EChara1" ,0, 1000, 45, 30, 30, 50, 13},
	CharacterBaseState{"EChara2" ,1, 2000, 42, 30, 30, 50, 13},
	CharacterBaseState{"EChara3" ,2, 2000, 20, 12, 30, 50, 13},
	CharacterBaseState{"EChara4" ,3, 2000, 28, 12, 30, 50, 13},
	CharacterBaseState{"EChara5" ,4, 2000, 25, 12, 30, 50, 13},
};

const int CharacterFactory::PlayerTableSize = sizeof(PlayerBaseState) / sizeof(CharacterBaseState);
const int CharacterFactory::EnemyTableSize = sizeof(EnemyBaseState) / sizeof(CharacterBaseState);

CharacterBase* CharacterFactory::CreatePlayer(int ID, int level) {
	if (ID < 0 || ID >= PlayerTableSize) 
		std::cout << "Failure:CharacterFactory.cpp:CreatePlayer\nID not found" << std::endl;
	return new Player(PlayerBaseState[ID], level);
}
CharacterBase* CharacterFactory::CreateEnemy(int ID, int level) {
	if (ID < 0 || ID >= EnemyTableSize)
		std::cout << "Failure:CharacterFactory.cpp:CreateEnemy\nID not found" << std::endl;
	return new Enemy(EnemyBaseState[ID], level);
}