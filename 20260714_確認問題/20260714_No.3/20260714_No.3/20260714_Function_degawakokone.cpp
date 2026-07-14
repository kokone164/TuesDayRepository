#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_degawakokone.h"

using namespace std;

void Game()
{
	//変数宣言
	int plyNum[10] = {};
	bool plyCheck[10] = {};
	int cpuNum[10] = {};
	bool cpuCheck[10] = {};

	int player = 0;
	int cpu = 0;

	int count = 0;
	int plyP = 0;
	int cpuP = 0;
	int i;
	//乱数の初期化
	srand((unsigned int)time(NULL));

	//数字振り分け
	for (i = 0; i < 10; i++)
	{
		plyNum[i] = rand() % NUMBER;
		plyCheck[i] = true;
		cpuNum[i] = rand() % NUMBER;
		cpuCheck[i] = true;
	}

	//ゲーム開始
	while (count < ROUND)
	{
		count++;

		cout <<"==================================="
			<<"\nROUND:" << count
			<< "\nNOW POINT\nPLAYER:" << plyP << " CPU:" << cpuP << endl;

		//使える数字を表示
		for (i = 0; i < 10; i++)
		{
			if (plyCheck[i] == true)
			{
				cout <<i + 1<<"番:" << plyNum[i] << ",";
			}
		}

		//プレイヤー入力
		cout << "\nプレイヤーは数字を選んで番号を入力してください" << endl;
		InputCheck(plyNum, 10, player);

		while (true)
		{
			cpu = rand() % 10;
			if (cpuCheck[cpu] == true)
			{
				break;
			}
		}

		plyCheck[player - 1] = false;
		cpuCheck[cpu - 1] = false;

		//数字を表示
		cout << "\nPLAYER:" << plyNum[player] << " CPU:" << cpuNum[cpu] << endl;

		//判定
		if (plyNum[player] == cpuNum[cpu])
		{
			cout << "DROW\n";
			plyP++;
			cpuP++;
		}
		else if (plyNum[player] > cpuNum[cpu])
		{
			cout << "プレイヤーに得点\n";
			plyP += POINT;
		}
		else
		{
			cout << "CPUに得点\n";
			cpuP += POINT;
		}
	}
	//最終結果

	cout << "\nPLAYER:" << plyP << " CPU:" << cpuP << endl;

	if (plyP == cpuP)
	{
		cout << "DROW" << endl;
	}
	else if (plyP > cpuP)
	{
		cout << "PLAYER WIN" << endl;
	}
	else
	{
		cout << "CPU WIN" << endl;
	}
}

void InputCheck(int plyCheck[],int num,int &player)
{
	while (true)
	{
		cin >> player;
		if (1 > player || 10 < player)
		{
			cout << "範囲外の数字です。入力しなおしてください。" << endl;
		}
		else
		{
			if (plyCheck[player] == false)
			{
				cout << "その数字は既に使用されています。入力しなおしてください。" << endl;
			}
			else
			{
				break;
			}
		}
	}
}

