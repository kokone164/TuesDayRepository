#include<iostream>
#include "Example_class.h"
using namespace std;

void Example_class::Move()
{
	playerX += 10;
}

void Example_class::Attack()
{
	cout << "UŒ‚—Í:" << attack << "UŒ‚‚µ‚Ü‚µ‚½\n";
}

void Example_class::Damage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}

void Example_class::ShoStatus()
{
	cout << "HP:" << hp << endl;
	cout << "PlayerXÀ•W:" << playerX << endl;
	cout << "PlayerYÀ•W:" << playerY << endl;
	cout << "UŒ‚—Í:" << attack << endl;
}