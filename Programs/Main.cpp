#include <iostream>
#include "ObjectPool.h"

#include "ScreenManager.h"

int main() {
	while (true) {
		ScreenManager::Instance().Update();
		ScreenManager::Instance().Render();
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
��return�ł�������Ԃ�


*/