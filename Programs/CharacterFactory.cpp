#include "CharacterFactory.h"

const CharacterBaseState CharacterFactory::PlayerBaseState[] = {
	CharacterBaseState{"勇者" ,0, 1000, 45, 30, 30, 50, 13},
	CharacterBaseState{"魔術師" ,1, 2000, 42, 30, 30, 50, 13},
	CharacterBaseState{"ナイトメア" ,2, 2000, 20, 12, 30, 50, 13},
	CharacterBaseState{"マリオネスト" ,3, 2000, 28, 12, 30, 50, 13},
	CharacterBaseState{"ウォーリアー" ,4, 2000, 25, 12, 30, 50, 13},
};

const CharacterBaseState CharacterFactory::EnemyBaseState[] = {
	CharacterBaseState{"ゴブリン" ,0, 1000, 45, 30, 30, 50, 13},
	CharacterBaseState{"スライム" ,1, 2000, 42, 30, 30, 50, 13},
	CharacterBaseState{"ワイバーン" ,2, 2000, 20, 12, 30, 50, 13},
	CharacterBaseState{"ガーゴイル" ,3, 2000, 28, 12, 30, 50, 13},
	CharacterBaseState{"スケルトン" ,4, 2000, 25, 12, 30, 50, 13},
};

const int CharacterFactory::PlayerTableSize = sizeof(PlayerBaseState) / sizeof(CharacterBaseState);
const int CharacterFactory::EnemyTableSize = sizeof(EnemyBaseState) / sizeof(CharacterBaseState);

//CharacterBase* CharacterFactory::CreatePlayer(int ID, int level) {
PoolHandle<Player> CharacterFactory::CreatePlayer(int ID, int level) {
	if (ID < 0 || ID >= PlayerTableSize) 
		std::cout << "Failure:CharacterFactory.cpp:CreatePlayer\nID not found" << std::endl;
	// メモ	ObjectPoolの.Acquire()で返すように変更する
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