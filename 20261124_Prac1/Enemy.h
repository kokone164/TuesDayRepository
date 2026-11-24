#pragma once
#include<iostream>
#include<string>

class Enemy
{
public:
	Enemy(const std::string& name);
	~Enemy();
	void Draw()const;
	void Damage(int damage);
private:
	std::string name;
	int hp;
};

