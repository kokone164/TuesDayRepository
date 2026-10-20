#pragma once
class Character
{
public:
	int hp = 100;
	//‹¤’Ê‚Ìˆ—
	virtual void ShowStatus();
	//”h¶ƒNƒ‰ƒX‚ÉÀ‘•‚ğ‚·‚é
	virtual void Attack() = 0;
};

