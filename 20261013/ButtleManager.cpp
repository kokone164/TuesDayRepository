#include"ButtleManager.h"
#include<iostream>
using namespace std;

void ButtleManager::StartBattle(Character*character)
{
	character->Attack();
}