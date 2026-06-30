#include<iostream>

double power(double x, int n);

int main(void)
{
	double x;
	double a = 3.2;
	int b = 5;

	x = power(a, b);
	std::cout << "Result:" << x << std::endl;
	return 0;
}

double power(double x, int n)
{
	double result = 1.0;
	while (n-- > 0)
	{
		result *= x;
	}
	return result;
}