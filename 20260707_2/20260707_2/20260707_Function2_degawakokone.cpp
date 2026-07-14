#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_degawakokone.h"
using namespace std;

void Rand(int plyNum[], int cpuNum[],int card)
{
	int num;
	//数字を配る
	for (int i = 0;i < CARD;i++)
	{
		plyNum[i] = i;
		cpuNum[i] = i;
	}
	//プレイヤーのカードをシャッフル
	for (int i = 0;i < CARD;i++)
	{
		num = rand() % CARD;

		int temp = plyNum[i];
		plyNum[i] = plyNum[num];
		plyNum[num] = temp;
	}
	//CPUのカードをシャッフル
	for (int i = 0;i < CARD;i++)
	{
		num = rand() % CARD;

		int temp = cpuNum[i];
		cpuNum[i] = cpuNum[num];
		cpuNum[num] = temp;
	}
}

int InputCheck(int min,int max)
{
	int num;
	while (true)
	{
		cin >> num;
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

//ゲーム進行
void Game()
{
	//乱数の初期化
	srand((unsigned int)time(NULL));

	//変数

	int plyNum[CARD] = {};
	int entNum[INDEX] = {};
	int cpuNum[CARD] = {};

	int hit = 0;
	int count = 0;

	//数字振り分け
	Rand(plyNum, cpuNum, INDEX);
	cout << "PLAYER:";
	for (int i = 0;i < INDEX;i++)
	{
		cout << plyNum[i] << ",";
	}
	
	while (true)
	{
		count++;
		cout << "\nROUND:" << count << ">>>>>>>>>>>>>>>>>>>>" << endl;

		//====================プレイヤーのターン====================

		cout << "数字を入力してください\n";
		for (int i = 0;i < INDEX;i++)
		{
			entNum[i] = InputCheck(MIN, MAX);
		}

		//判定
		for (int i = 0;i < INDEX;i++)
		{
			if (cpuNum[i] == entNum[i])
			{
				cout << "Hit,";
				hit++;
			}
			else
			{
				cout << "Miss,";
			}
		}

		//空白
		cout << "\n";

		//勝利
		if (hit == 3)
		{
			cout << "\nALL HIT!プレイヤーの勝利" << endl;
			break;
		}

		hit = 0;

		//====================CPUのターン====================

		cout << "\nCPU TURN" << endl;
		for (int i = 0;i < INDEX;i++)
		{
			entNum[i] = rand() % 10;
			cout << entNum[i] << endl;

		}
		//判定
		for (int i = 0;i < INDEX;i++)
		{
			if (entNum[i] == plyNum[i])
			{
				cout << "Hit,";
				hit++;
			}
			else
			{
				cout << "Miss,";
			}
		}
		//空白
		cout << "\n";

		//勝利
		if (hit == 3)
		{
			cout << "\nALL HIT!CPUの勝利" << endl;
			break;
		}

		hit = 0;
	}
}