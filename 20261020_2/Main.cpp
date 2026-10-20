#include"Megumi.h"
#include"Inumaki.h"
#include"Gojo.h"
#include<iostream>
using namespace std;

int main(void)
{
	Megumi megumi;
	Inumaki inumaki;
	Gojo gojo;

	Sorcerer* sorcerers[3]{ &megumi,&inumaki,&gojo };
	
	for (int i = 0; i < 3; i++)
	{
		sorcerers[i]->ShowStatus();
		sorcerers[i]->UseTechnique();
		cout << "\n";
	}

	return 0;
}