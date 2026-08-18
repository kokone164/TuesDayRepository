#include<iostream>

using namespace std;

int main(void)
{
	int num = 10;
	int* p = &num;

	cout << num << endl;
	cout << &num << endl;
	cout << p;

	//cout << *p;

	return 0;
}