#include"Enemy.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));

	vector<Enemy>enemies;
	int randHp = 0;

	for (int i = 0; i < 3; i++)
	{
		randHp = rand() % 70 + 30;
		enemies.push_back(Enemy(randHp));
	}

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	enemies.erase(enemies.begin() + 0);		//ˆê”Ô–Ú‚Ì“G‚ªÁ‚¦‚é
	cout << "ˆê‘Ìíœ‚µ‚Ü‚µ‚½" << endl;

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	return 0;
}