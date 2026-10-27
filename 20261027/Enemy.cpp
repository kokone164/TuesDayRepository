#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy(){}

//この関数の中では、オブジェクトのメンバ変数（hpなど）の値を絶対に書き換えません（読み取り専用にします）
void Enemy::ShowStatus()const
{
	cout << "Enemy HP:" << hp << endl;
}