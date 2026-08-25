#pragma once
class Example_class
{
public:
	//持っているデータ
	int hp;
	int playerX, playerY;
	int attack;

	//プレイヤーができること
	void Move();
	void Attack();
	void Damage(int damage);
	void ShoStatus();
};

