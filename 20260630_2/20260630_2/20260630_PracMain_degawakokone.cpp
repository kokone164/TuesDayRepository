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

	while (true)
	{
		for (int i = 0;i < 2;i++)
		{
			randCard = rand() % CARD + 1;
			plyCard += randCard;
		}
	}

	cout << plyCard << endl;

	return 0;
}