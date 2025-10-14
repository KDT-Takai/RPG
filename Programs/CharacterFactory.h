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

	// �e�[�u���T�C�Y������p�̕ϐ�
	static const int PlayerTableSize;
	static const int EnemyTableSize;

	//static const ObjectPool<Player> playerPool;
public:

	/// <summary>
	/// �L�����N�^�[����
	/// </summary>
	/// <param name="argBaseState">�L�����N�^�[�̊�b�l</param>
	/// <returns>���������L�����N�^�[</returns>
	static CharacterBase* CreatePlayer(int ID, int level);
	static CharacterBase* CreateEnemy(int ID, int level);


	//static PoolHandle<Player> CreatePlayer(int ID) {
	//	auto handle = playerPool.Acquire();
	//	handle->Initialize(ID); // Player���ŏ������֐���p�ӂ��Ă���
	//	return handle;
	//}
};