#include "Game.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	// 乱数の初期化
	srand(static_cast<unsigned int>(time(nullptr)));
	// ゲームの初期化
	Game game;
	// ゲームの開始
	game.Start();
	return 0;
}