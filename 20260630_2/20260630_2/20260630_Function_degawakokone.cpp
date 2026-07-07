#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_degawakokone.h"

using namespace std;

void Game()
{
	//乱数の初期化
	srand((unsigned int)time(NULL));

	//変数
	int plyCard = 0;
	int cpuCard = 0;

	int choice = 0;

	//カードを配る
	for (int i = 0;i < 2;i++)//プレイヤー
	{
		AddCard(plyCard);
	}
	cout << "PLAYER:" << plyCard << endl;

	for (int i = 0;i < 2;i++)//CPU
	{
		AddCard(cpuCard);
	}
	cout << "CPU:" << cpuCard << endl;

	//バースト
	if (plyCard > BLACKJACK || cpuCard > BLACKJACK)
	{
		Burst(plyCard, cpuCard);
		return;
	}

	//21
	if (plyCard == BLACKJACK || cpuCard == BLACKJACK)
	{
		BlackJack(plyCard, cpuCard);
		return;
	}

	cout << "==========PLAYER TURN==========\n";
	
	while (true)
	{
		//yes or no
		cout << "プレイヤーはヒットかスタンドか選んでください\n";
		choice = InputCheck(CHOICE_MIN, CHOICE_MAX);

		if (choice == 0)
		{
			//カード追加
			AddCard(plyCard);
			//カード表示
			cout <<"PLAYER:" << plyCard << endl;

			//バースト
			if (plyCard > BLACKJACK)
			{
				Burst(plyCard, cpuCard);
				return;
			}
			//21
			if (plyCard == BLACKJACK)
			{
				BlackJack(plyCard, cpuCard);
				return;
			}
		}
		else
		{
			break;
		}
	}

	cout << "==========CPU TURN==========\n";

	while (true)
	{
		if (plyCard >= cpuCard)
		{
			//カード追加
			AddCard(cpuCard);
			//カード表示
			cout <<"CPUがカードを引きました。\nCPU:" << cpuCard << endl;

			//バースト
			if (cpuCard > BLACKJACK)
			{
				Burst(plyCard, cpuCard);
				return;
			}
			//21
			if (cpuCard == BLACKJACK)
			{
				BlackJack(plyCard, cpuCard);
				return;
			}
		}
		else if (plyCard < cpuCard)
		{
			break;
		}
	}

	//====================最終結果====================

	cout << "\nPLAYER:" << plyCard << "\nCPU:" << cpuCard << endl;
	//最終勝敗
	BlackJack(plyCard, cpuCard);

}

void AddCard(int& card)
{
	card += rand() % CARD + 1;
}

void BlackJack(int player, int cpu)
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
		cout << "プレイヤー敗北\n";
	}
}

void Burst(int& player, int& cpu)
{
	if (player > BLACKJACK)
	{
		cout << "プレイヤー敗北\n";
	}
	if (cpu > BLACKJACK)
	{
		cout << "プレイヤーの勝利\n";
	}
}

int InputCheck(int min, int max)
{
	int num;
	while (true)
	{
		cout << "CHOICE:";
		cin >> num;

		//入力チェック
		if (min > num || max < num)
		{
			cout << "範囲外の数字です。入力しなおしてください。\n";
		}
		else
		{
			break;
		}
	}
	return num;
}