#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"ButtleManager.h"
int main(void)
{
	//コンストラクタ
	Player player("勇者ヨシヒコ");
	Enemy enemy("スライム");
	Boss boss("魔王");

	ButtleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);

	//Character* character;	//characterというポインターに別のものを入れるとそこの関数を使うことができる

	//character = &player;
	//character->Attack();

	//character = &enemy;
	//character->Attack();
	//
	//character = &boss;
	//character->Attack();
	
	return 0;
}