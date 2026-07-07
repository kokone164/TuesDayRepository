#include<iostream>

using namespace std;

void AddAry(int number[], int index, int num2);

int main(void)
{
	int i;

	int number[10] = {};

	int num = 0;

	cout << "”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	for (i = 0;i < 10;i++)
	{
		cin >> num;
		AddAry(number, i, num);
	}

	cout << "‹ô”:";
	for (i = 0;i < 10;i++)
	{
		if (number[i] % 2 == 0)
		{
			cout << number[i] << ",";
		}
	}

	cout << "\nŠï”:";
	for (i = 0;i < 10;i++)
	{
		if (number[i] % 2 == 1)
		{
			cout << number[i] << ",";
		}
	}

	return 0;
}

void AddAry(int number[], int index,int num2)
{
	number[index] = num2;
}