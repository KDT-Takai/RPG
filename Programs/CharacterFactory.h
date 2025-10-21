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
	// �e�[�u���T�C�Y������p�̕ϐ�
	static const int PlayerTableSize;
	static const int EnemyTableSize;

	CharacterFactory()
		: playerPool(8), enemyPool(8) {}


	PoolHandle<Player> CreatePlayer(int ID, int level);
	PoolHandle<Enemy> CreateEnemy(int ID, int level);

	/// <summary>
	/// �L�����N�^�[����
	/// </summary>
	/// <param name="argBaseState">�L�����N�^�[�̊�b�l</param>
	/// <returns>���������L�����N�^�[</returns>
//	static CharacterBase* CreatePlayer(int ID, int level);
//	static CharacterBase* CreateEnemy(int ID, int level);


	//static PoolHandle<Player> CreatePlayer(int ID) {
	//	auto handle = playerPool.Acquire();
	//	handle->Initialize(ID); // Player���ŏ������֐���p�ӂ��Ă���
	//	return handle;
	//}
};