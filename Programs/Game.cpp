#include "Game.h"
#include <iostream>
#include "ScreenManager.h"
#include "Text.h"

//Game::Game() {
//    p1 = factory.CreatePlayer(0, 5);
//    e1 = factory.CreateEnemy(2, 3);
//
//    p1->Attack();
//    e1->Attack();
//
//    std::cout << "Press 0 to END" << std::endl;
//    std::cout << "Press 1 to Draw PlayerData" << std::endl;
//    std::cout << "Press 2 to Draw EnemyData" << std::endl;
//    std::cout << "Press 3 to PlayerAttack" << std::endl;
//    Text::Instance().Line();
//}

Game::Game()
    :   p1(factory.CreatePlayer(0, 5)),
        p2(factory.CreatePlayer(1, 5)),
        p3(factory.CreatePlayer(2, 5)),
        p4(factory.CreatePlayer(3, 5)),
        e1(factory.CreateEnemy(0,2)),
        e2(factory.CreateEnemy(1,3)),
        e3(factory.CreateEnemy(2,4)),
        e4(factory.CreateEnemy(3,5))
{

    // プレイヤー2体、敵3体など好きな数を生成
//    players.push_back(std::move(factory.CreatePlayer(0, 5)));
//    players.push_back(std::move(factory.CreatePlayer(1, 6)));
//
//    enemies.push_back(std::move(factory.CreateEnemy(2, 3)));
//    enemies.push_back(std::move(factory.CreateEnemy(3, 4)));
//    enemies.push_back(std::move(factory.CreateEnemy(4, 2)));

//    for (int i = 0; i < 4; ++i) {
//        players.push_back(factory.CreatePlayer(i, 5 + i));
//        enemies.push_back(factory.CreateEnemy(i, 2 + i));
//    }


//    std::cout << "Press 0 to END" << std::endl;
//    std::cout << "Press 1 to Draw All Player Data" << std::endl;
//    std::cout << "Press 2 to Draw All Enemy Data" << std::endl;
//    std::cout << "Press 3 to Player0 Attack Enemy0" << std::endl;
}

void Game::Update() {
//    std::cin >> data;
    int owner, target;

    Text::Instance().Line();
    std::cout << "Select Player : 0 ~ 3" << std::endl;
    Text::Instance().Line();
    std::cin >> owner;

    Text::Instance().Line();
    std::cout << "Select Enemy : 0 ~ 3"<< std::endl;
    Text::Instance().Line();
    std::cin >> target;

    PoolHandle<Player>* playerPtr = nullptr;
    switch (owner) {
    case 0: playerPtr = &p1; break;
    case 1: playerPtr = &p2; break;
    case 2: playerPtr = &p3; break;
    case 3: playerPtr = &p4; break;
    }
    PoolHandle<Enemy>* enemyPtr = nullptr;
    switch (target) {
    case 0: enemyPtr = &e1; break;
    case 1: enemyPtr = &e2; break;
    case 2: enemyPtr = &e3; break;
    case 3: enemyPtr = &e4; break;
    }

    if (playerPtr && enemyPtr) {
        BattleSystem battle;
        battle.Attack(**playerPtr, **enemyPtr); // PoolHandle の中身を参照
    }
    else {
        std::cout << "Invalid selection!" << std::endl;
    }

//    if (owner < players.size() && target < enemies.size()) {
//        BattleSystem battle;
//        battle.Attack(*players[owner], *enemies[target]);
//    }
//    else {
//        std::cout << "Invalid selection!" << std::endl;
//    }
    
    //switch (data) {
    //case 0:
    //    std::cout << "End game\n";
    //    break;
    //case 1:
    //    p1->ChangeData();
    //    //for (auto& p : players) p->ChangeData();
    //    Text::Instance().Line();
    //    break;
    //case 2:
    //    e1->ChangeData();
    //    //for (auto& e : enemies) e->ChangeData();
    //    Text::Instance().Line();
    //    break;
    //case 3:
    //    BattleSystem battle;
    //    battle.Attack(*p1, *e1);
    //
    //    //if (!players.empty() && !enemies.empty()) {
    //    //    BattleSystem battle;
    //    //    battle.Attack(*players[0], *enemies[0]);
    //    //}
    //    Text::Instance().Line();
    //    break;
    //default:
    //    std::cout << "Unknown command\n";
    //    break;
    //}
}

void Game::Render() {
//    std::cout << "GameScene" << std::endl;
}