#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_degawakokone.h"

using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));

	int plyCard = 0;
	int cpuCard = 0;

	int randCard = 0;


	randCard = rand() % CARD + 1;

	cout << "BLACK JACK\nヒット:0　スタンド:1\n"
		"====================GAME START====================\n";

	//カードを配る
	for (int i = 0;i < 2;i++)
	{
		AddCard(plyCard);
	}
	cout <<"PLAYER:" << plyCard << endl;

	for (int i = 0;i < 2;i++)
	{
		AddCard(cpuCard);
	}
	cout <<"CPU:" << cpuCard << endl;

	if (plyCard >= BLACKJACK||cpuCard>=BLACKJACK)
	{
		Burst(plyCard, cpuCard);
		return 0;
	}
	
	cout << "====================PLAYER TURN====================\n";



	return 0;
}