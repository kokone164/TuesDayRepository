#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_degawakokone.h"
using namespace std;

void Rand(int plyNum[], int cpuNum[],int index)
{
	for (int i = 0;i < index;i++)
	{
		plyNum[i] = rand() % 10;
		cpuNum[i] = rand() % 10;
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

	int plyNum[INDEX] = {};
	int entNum[INDEX] = {};
	int cpuNum[INDEX] = {};

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