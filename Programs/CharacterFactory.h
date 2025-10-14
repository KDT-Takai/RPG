#pragma once
#include "CharacterBase.h"
#include "Player.h"
#include "Enemy.h"

#include "ObjectPool.h"

class CharacterFactory
{
//protected:
//	CharacterBase();
//	virtual ~CharacterBase() = default;
//public:
//	CharacterBase(const CharacterBase&) = delete;
//	CharacterBase& operator=(const CharacterBase&) = delete;
//	static CharacterBase& Instance() {
//		static CharacterBase instance;
//		return instance;
//	}
private:
	static const CharacterBaseState PlayerBaseState[];	// Player
	static const CharacterBaseState EnemyBaseState[];	// Enemy

	// テーブルサイズを入れる用の変数
	static const int PlayerTableSize;
	static const int EnemyTableSize;

	//static const ObjectPool<Player> playerPool;
public:

	/// <summary>
	/// キャラクター生成
	/// </summary>
	/// <param name="argBaseState">キャラクターの基礎値</param>
	/// <returns>生成したキャラクター</returns>
	static CharacterBase* CreatePlayer(int ID, int level);
	static CharacterBase* CreateEnemy(int ID, int level);


	//static PoolHandle<Player> CreatePlayer(int ID) {
	//	auto handle = playerPool.Acquire();
	//	handle->Initialize(ID); // Player側で初期化関数を用意しておく
	//	return handle;
	//}
};