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

struct CharacterLevelState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// �U����
	int defense;		// �h���
	int speed;			// ���x
	int luck;			// �^
};

struct CharacterChangeState {
	int hp;				// HP
	int mp;				// MP
	int attack;			// �U����
	int defense;		// �h���
	int speed;			// ���x
	int luck;			// �^
};