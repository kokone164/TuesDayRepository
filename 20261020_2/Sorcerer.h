#pragma once
class Sorcerer
{
protected:
	int hp = 0;
	int curse = 0;
public:
	virtual void ShowStatus();
	virtual void UseTechnique() = 0;
};

