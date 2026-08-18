#include<iostream>

using namespace std;

void Damage(int *dmg)
{
	(*dmg) -= 20;
}

void Heal(int* hl)
{
	(*hl) += 30;
}

int main(void)
{
	int hp = 100;

	Damage(&hp);

	Heal(&hp);

	cout << "hp:" << hp << endl;

	return 0;
}