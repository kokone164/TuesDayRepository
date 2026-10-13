#include"ButtleManager.h"
#include<iostream>
using namespace std;

void ButtleManager::StartBattle(Character*character)
{
	cout << character->GetName() << endl;
	character->Attack();
}