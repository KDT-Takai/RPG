#include <iostream>
#include "ObjectPool.h"
#include "CharacterFactory.h"

#include "Player.h"
#include "BattleSystem.h"

int main() {
	//ObjectPool<Player> playerPool(4);
	//ObjectPool<CharacterBase> enemyPool(4);

	// ������CharacterFactory���g���Đ���������
	//auto player = playerPool.Acquire();
	//player->Attack();

	//auto enemy1 = enemyPool.Acquire();
	//enemy1->Attack();

	//auto enemy2 = enemyPool.Acquire();
	//enemy2->Attack();

	CharacterBase* player1 = CharacterFactory::CreatePlayer(0,5);
	//player1->Attack();

	CharacterBase* enemy1 = CharacterFactory::CreateEnemy(0,1);
	//enemy1->Attack();

	int data = 0;

	std::cout << "Press 0 to END" << std::endl;
	std::cout << "Press 1 to Draw PlayerData" << std::endl;
	std::cout << "Press 2 to Draw EnemyData" << std::endl;
	std::cout << "Press 3 to PlayerAttack" << std::endl;
	while (true) {
		std::cin >> data;
		switch (data) {
		case 0:
			return 0;
			break;
		case 1:
			player1->ChangeData();
			break;
		case 2:
			enemy1->ChangeData();
			break;
		case 3:
			BattleSystem battle;
			battle.Attack(*player1, *enemy1);
			break;
		}
	}
	return 0;
}

// -------------------------------
// ����
// -------------------------------
/*

// CharacterBase
Player
Enemy

// �t�@�N�g���[�p�^�[��
CharacterFactory
// ����
// �V���O���g�� ��΃V���O���g������Ȃ��Ă���
static CharacterBase* CreatePlayer(int id)
static CharacterBase* CreateEnemy(int id)
// �f�[�^�e�[�u��(CharacterFactory.cpp)

Pool
// �I�u�W�F�N�g�v�[��
// Acquire()�Ő�������ۂ�
// �L�����N�^�̍쐬��������

Main
// �L����ԋ@�B



��U�v�[�����g�p�����ɂ��ׂ��H
�t�@�N�g���[�����Ńv�[�����g���Đ�������̂�



*/