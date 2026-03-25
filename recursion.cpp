#include <iostream>
using namespace std;

void sort(int number)
{
	if (number == 0)
	{
		return;
	}
	cout << number << " " ;
	sort(number - 1);
}

int fact(int number)
{
	if (number == 1 || number == 0)
	{
		return number;
	}
	return number * fact(number - 1);
}

int sumDigits(int number)
{
	if (number == 0 )
	{
		return 0;
	}
	return (number % 10) + sumDigits(number / 10);
}

int fibonacci(int number)
{
	if (number == 1 || number == 0)
	{
		return number;
	}
	return fibonacci(number - 2) + fibonacci(number - 1);
}

int main()
{
	cout << "print Number to 0 " << endl;
	sort(8);
	cout << endl;
	cout << "factoreal number" << endl;
	cout << fact(5) << endl;
	cout << "sum of the number digits" << endl;
	cout << sumDigits(1234) << endl;
	cout << "metod fib" << endl;
	int index;
	cin >> index;
	for (int i = 0; i <= index; i++)
	{
		cout << fibonacci(i) << " ";
	}

}