#pragma once
#include <vector>
#include "ScreenBase.h"
#include "Player.h"
#include "CharacterFactory.h"
#include "BattleSystem.h"

class Game : public ScreenBase
{
private:
	//ObjectPool<Player> playerPool(4);
	//ObjectPool<CharacterBase> enemyPool(4);
	
	// ‚±‚±‚ÅCharacterFactory‚ðŽg‚Á‚Ä¶¬‚µ‚½‚¢
	//auto player = playerPool.Acquire();
	//player->Attack();
	
	//auto enemy1 = enemyPool.Acquire();
	//enemy1->Attack();
	
	//auto enemy2 = enemyPool.Acquire();
	//enemy2->Attack();

	//CharacterBase* player1;
	////player1->Attack();

	//CharacterBase* enemy1;
	//enemy1->Attack();

	CharacterFactory factory;

	PoolHandle<Player> p1;
	PoolHandle<Player> p2;
	PoolHandle<Player> p3;
	PoolHandle<Player> p4;
	PoolHandle<Enemy> e1;
	PoolHandle<Enemy> e2;
	PoolHandle<Enemy> e3;
	PoolHandle<Enemy> e4;

//	std::vector<PoolHandle<Player>> players;
//	std::vector<PoolHandle<Enemy>> enemies;

	int data = 0;

public:

	Game();
	~Game() = default;

	void Update() override;
	void Render() override;

};