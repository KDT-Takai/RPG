#include "CharacterFactory.h"

const CharacterBaseState CharacterFactory::PlayerBaseState[] = {
	CharacterBaseState{"�E��" ,0, 1000, 45, 30, 30, 50, 13},
	CharacterBaseState{"���p�t" ,1, 2000, 42, 30, 30, 50, 13},
	CharacterBaseState{"�i�C�g���A" ,2, 2000, 20, 12, 30, 50, 13},
	CharacterBaseState{"�}���I�l�X�g" ,3, 2000, 28, 12, 30, 50, 13},
	CharacterBaseState{"�E�H�[���A�[" ,4, 2000, 25, 12, 30, 50, 13},
};

const CharacterBaseState CharacterFactory::EnemyBaseState[] = {
	CharacterBaseState{"�S�u����" ,0, 1000, 45, 30, 30, 50, 13},
	CharacterBaseState{"�X���C��" ,1, 2000, 42, 30, 30, 50, 13},
	CharacterBaseState{"���C�o�[��" ,2, 2000, 20, 12, 30, 50, 13},
	CharacterBaseState{"�K�[�S�C��" ,3, 2000, 28, 12, 30, 50, 13},
	CharacterBaseState{"�X�P���g��" ,4, 2000, 25, 12, 30, 50, 13},
};

const int CharacterFactory::PlayerTableSize = sizeof(PlayerBaseState) / sizeof(CharacterBaseState);
const int CharacterFactory::EnemyTableSize = sizeof(EnemyBaseState) / sizeof(CharacterBaseState);

//CharacterBase* CharacterFactory::CreatePlayer(int ID, int level) {
PoolHandle<Player> CharacterFactory::CreatePlayer(int ID, int level) {
	if (ID < 0 || ID >= PlayerTableSize) 
		std::cout << "Failure:CharacterFactory.cpp:CreatePlayer\nID not found" << std::endl;
	// ����	ObjectPool��.Acquire()�ŕԂ��悤�ɕύX����
	// return new Player(PlayerBaseState[ID], level);
	auto player = playerPool.Acquire();
	player->Initialize(PlayerBaseState[ID], level);
	return player;
}
//CharacterBase* CharacterFactory::CreateEnemy(int ID, int level) {
PoolHandle<Enemy> CharacterFactory::CreateEnemy(int ID, int level) {
	if (ID < 0 || ID >= EnemyTableSize)
		std::cout << "Failure:CharacterFactory.cpp:CreateEnemy\nID not found" << std::endl;
	// return new Enemy(EnemyBaseState[ID], level);
	auto enemy = enemyPool.Acquire();
	enemy->Initialize(EnemyBaseState[ID], level);
	return enemy;
}