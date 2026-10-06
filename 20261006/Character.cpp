#include "Character.h"
#include"Config.h"

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//コンストラクタ
Character::Character()
{
	hp = Config::MAX_HP;

	attack = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defence = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	evasion = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}

//ステータス表示
void Character::ShowStatus()
{
	cout << "HP : " << hp << endl;
	cout << "攻撃力 : " << attack << endl;
	cout << "防御力 : " << defence << endl;
	cout << "回避力 : " << evasion << endl;
}

//攻撃
void Character::Attack(Character& target)
{
	//ランダムな攻撃値
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	int attackValue = attack + randomValue;
	cout << "攻撃値は" << attackValue << endl;

	//回避判定
	if (attackValue <= target.evasion)
	{
		cout << "攻撃を回避しました。" << endl;
		cout << "ダメージは0です。" << endl;
		return;
	}

	//ダメージ計算
	int damage = attackValue - target.defence;

	if (damage < 0)
	{
		damage = 0;
	}

	target.hp -= damage;

	cout << "攻撃成功！" << "ダメージ : " << damage << "点です。" << endl;

	//生存判定
	if (target.hp < Config::DEAD_HP)
	{
		target.hp = 0;
	}
}

void Character::Recovery()
{
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	hp += randomValue;

	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
	cout << "HPを" << randomValue << "回復しました。" << "\n現在のHP : " << hp << endl;
}

bool Character::IsAlive()
{
	return hp > Config::DEAD_HP;
}

int Character::GetHp()
{
	return hp;
}