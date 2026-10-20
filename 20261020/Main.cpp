#include"Player.h"
#include"Enemy.h"
#include<iostream>

int main(void)
{
	Player player;
	Enemy enemy;

	/*player.ShowStatus();
	enemy.ShowStatus();

	player.Attack();
	enemy.Attack();*/

	Character* characters[2] = { &player,&enemy };

	for (int i = 0; i < 2; i++)
	{
		characters[i]->ShowStatus();
		characters[i]->Attack();
	}

	return 0;
}