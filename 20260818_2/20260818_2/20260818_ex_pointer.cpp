#include<iostream>

using namespace std;

void Change(int *p)
{
	//*p = 100;
	(*p)++;
}

int main(void)
{
	int num = 10;

	Change(&num);

	cout << num << endl;

	/*int* p = &num;

	cout << num << endl;
	cout << &num << endl;
	cout << *p << endl;

	*p = 50;

	cout << num;*/

	return 0;
}