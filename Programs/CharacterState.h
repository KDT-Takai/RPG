#pragma once

/// <summary>
/// character base state �L�����N�^�[�̊�b�l
/// </summary>
struct CharacterBaseState {
	std::string name;	// ���O
	int id;				// ID
	int hp;				// HP
	int mp;				// MP
	int attack;			// �U����
	int defense;		// �h���
	int speed;			// ���x
	int luck;			// �^
};
// ���x�����Z�������̃X�e�[�^�X
struct CharacterLevelState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// �U����
	int defense;		// �h���
	int speed;			// ���x
	int luck;			// �^
};
// �Q�[������buff�Ȃǂŕϓ�����l
struct CharacterChangeState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// �U����
	int defense;		// �h���
	int speed;			// ���x
	int luck;			// �^
};