#pragma once
#include <iostream>
#include "CharacterState.h"

class CharacterBase
{
protected:

	int level;						// ���x��
	CharacterBaseState BaseState;	// �L�����N�^�[�̊�b�l
	CharacterLevelState LevelState; // �L�����N�^�[�̃��x���l
	CharacterChangeState ChangeState; // �L�����N�^�[�̕ω��l

public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="argBaseState">�L�����N�^�[�̊�b�l</param>
	CharacterBase(CharacterBaseState argBaseState, int level) {
		this->BaseState = argBaseState;
		this->level = level;
		Level();
		Change();
	};

	~CharacterBase();

	void Damage(int num) {
		std::cout << "Character Damaged!" << std::endl;
		ChangeState.hp -= num;
	}

	// Getter
	int GetLevel() const { return level; }
	CharacterBaseState GetBaseState() const { return BaseState; }
	CharacterLevelState GetLevelState() const { return LevelState; }
	CharacterChangeState GetChangeState() const { return ChangeState; }

	// �f�[�^�\��
	void BaseData() {
		std::cout << "ID:" << BaseState.id << "\nName:" << BaseState.name << "\nLevel:" << level << "\nhp:" << BaseState.hp << "\nmp:" << BaseState.mp <<
			"\nattack:" << BaseState.attack << "\ndefense:" << BaseState.defense << "\nspeed:" << BaseState.speed << "\nluck:" << BaseState.luck << std::endl;
	}
	void LevelData() {
		std::cout << "LevelData\nLevel:" << level << "\nhp:" << LevelState.hp << "\nmp:" << LevelState.mp <<
			"\nattack:" << LevelState.attack << "\ndefense:" << LevelState.defense << "\nspeed:" << LevelState.speed << "\nluck:" << LevelState.luck << std::endl;
	}
	void ChangeData() {
		std::cout << "ChangeData\nLevel:" << level << "\nhp:" << ChangeState.hp << "\nmp:" << ChangeState.mp <<
			"\nattack:" << ChangeState.attack << "\ndefense:" << ChangeState.defense << "\nspeed:" << ChangeState.speed << "\nluck:" << ChangeState.luck << std::endl;
	}

private:
	// ���x���A�b�v����
	void Level() {
		LevelState.hp = 10 * level;
		LevelState.mp = 5 * level;
		LevelState.attack = 3 * level;
		LevelState.defense = 2 * level;
		LevelState.speed = 1 * level;
		LevelState.luck = 1 * level;
	}
	// �ω�����l�Ɋւ��鏈��
	void Change() {
		ChangeState.hp = LevelState.hp;
		ChangeState.mp = LevelState.mp;
		ChangeState.attack = LevelState.attack;
		ChangeState.defense = LevelState.defense;
		ChangeState.speed = LevelState.speed;
		ChangeState.luck = LevelState.luck;
	}
};