#pragma once
#include "CharacterBase.h"
#include "Player.h"
#include "Enemy.h"

#include "ObjectPool.h"

class CharacterFactory
{
private:

	ObjectPool<Player> playerPool;
	ObjectPool<Enemy> enemyPool;

public:

	static const CharacterBaseState PlayerBaseState[];
	static const CharacterBaseState EnemyBaseState[];
	// テーブルサイズを入れる用の変数
	static const int PlayerTableSize;
	static const int EnemyTableSize;

	CharacterFactory()
		: playerPool(8), enemyPool(8) {}


	PoolHandle<Player> CreatePlayer(int ID, int level);
	PoolHandle<Enemy> CreateEnemy(int ID, int level);

	/// <summary>
	/// キャラクター生成
	/// </summary>
	/// <param name="argBaseState">キャラクターの基礎値</param>
	/// <returns>生成したキャラクター</returns>
//	static CharacterBase* CreatePlayer(int ID, int level);
//	static CharacterBase* CreateEnemy(int ID, int level);


	//static PoolHandle<Player> CreatePlayer(int ID) {
	//	auto handle = playerPool.Acquire();
	//	handle->Initialize(ID); // Player側で初期化関数を用意しておく
	//	return handle;
	//}
};