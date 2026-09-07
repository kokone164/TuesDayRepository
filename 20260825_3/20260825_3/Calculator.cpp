#include "Calculator.h"
#include<iostream>
using namespace std;

void Calculator::add()
{
	number = num1 + num2;
}

void Calculator::subtract()
{
	if (num1 >= num2)
	{
		number = num1 - num2;
	}
	else
	{
		number = num2 - num1;
	}
}

void Calculator::multiply()
{
	number = num1 * num2;
}

void Calculator::divide()
{
	if (num1 >= num2)
	{
		number = num1 / num2;
	}
	else
	{
		number = num2 / num1;
	}
}

