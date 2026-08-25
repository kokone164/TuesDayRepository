#include<iostream>
#include<string>
#include "Dog.h"
using namespace std;

void Dog::Name()
{
	cout << "名前を入力してください。" << endl;
	cin >> dogName;
}

void Dog::ShowProfile(string name)
{
	cout << "名前は" << name << "です。" << endl;
}