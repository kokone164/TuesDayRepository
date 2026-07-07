#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_degawakokone.h"

using namespace std;

void AddCard(int& card)
{
	srand((unsigned int)time(NULL));

	int randCard = rand() % CARD + 1;
	card += randCard;
}

void BrackJack(int player, int cpu)
{
	if (player == cpu)
	{
		cout << "引き分け\n";
	}
	else if (player > cpu)
	{
		cout << "プレイヤーの勝利\n";
	}
	else
	{
		cout << "CPUの勝利\n";
	}
}

void Burst(int& player, int& cpu)
{
	if (player >= BLACKJACK)
	{
		cout << "プレイヤー敗北\n";
	}
	if (cpu >= BLACKJACK)
	{
		cout << "CPU敗北\n";
	}
}