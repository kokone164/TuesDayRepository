#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy() {};

void Enemy::ShowHp()const
{
	cout << "ENEMY HP : " << hp << endl;
}

void Enemy::Damage(int damage)
{
	hp -= damage;
}

int Enemy::GetHp()const
{
	return hp;
}