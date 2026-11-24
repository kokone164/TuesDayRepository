#include "Enemy.h"

Enemy::Enemy(const std::string& name) :name(name), hp(100) {
	std::cout << name << "が出現しました。\n";
}
Enemy::~Enemy()
{
	std::cout << name << "が破棄されました。\n";
}

int Enemy::GetHp()const
{
	return hp;
}

void Enemy::Draw()const
{
	std::cout << "名前：" << name << "\n";
	std::cout << "HP：" << hp << "\n";
}

void Enemy::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}

	std::cout << name << "は" << damage << "のダメージを受けました\n";
	std::cout << "残り" << hp << "です\n";
}