#include<iostream>
#include"Example_class.h"
using namespace std;

int main(void)
{
	//プレイヤークラスを実体化
	Example_class example;

	example.hp = 100;
	example.attack = 20;
	example.playerX = 0;
	example.playerY = 0;
	example.ShoStatus();

	example.Move();
	example.Attack();
	example.Damage(30);

	example.ShoStatus();

	return 0;
}