#include"Enemy.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

const int HP_MAX = 70;
const int HP_MIN = 30;
const int DAMAGE_MAX = 70;
const int DAMAGE_MIN = 20;
const int INDEX = 3;

int main(void)
{
	//乱数の初期化
	srand((unsigned int)time(NULL));

	vector<Enemy>enemies;
	//HPを決める
	for (int i = 0; i < INDEX; i++)
	{
		int hp = rand() % HP_MAX + HP_MIN;
		enemies.push_back(Enemy(hp));
	}
	//HP表示
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << "攻撃する敵を選択してください。" << endl;

	int choice;
	cin >> choice;

	int damage = rand() % DAMAGE_MAX + DAMAGE_MIN;
	cout << "与えたダメージ" << damage << endl;

	enemies[choice - 1].Damage(damage);

	cout << "ダメージ後のHP" << endl;

	int i = 0;
	for (Enemy& enemy : enemies)
	{
		if (enemies[i].GetHp() <= 0)
		{
			enemies.erase(enemies.begin() + i);
		}
		i++;
	}

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}


	return 0;
}