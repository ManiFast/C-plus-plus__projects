#include <iostream>
using namespace std;

/*
	if
	if - else if
*/

int main()
{
	setlocale(LC_ALL, "Rus");

	/*
	if (утверждение)
	{
		действие 1;
		действие 2;
	}
	*/

	bool isRain = 1;
	// true = 1, false = 0

	if (isRain)
	{
		cout << "Идет дождь, нужен зонт" << endl;
	}
	else {
		cout << "Дождя нет, зонт не нужен" << endl;
	}

	int number;
	cout << "Введите число: ";
	cin >> number;
	if (number > 5)
	{
		cout << "число больше пяти" << endl;
	} if (number < 5)
	{
		cout << "Число меньше пяти" << endl;
	}
	else {
		cout << "Число равно пяти" << endl;
	}

	int num;
	int num1;
	cout << "Введите число от которого хотите сравнить (нап. 0)\n: ";
	cin >> num;
	cout << "Введите число\n: ";
	cin >> num1;
	if (num1 > num)
	{
		cout << "Число больше чем " << endl;
	} if (num1 < num)
	{
		cout << "Число меньше чем " << endl;
	} if (num1 == num)
	{
		cout << "Число равно " << endl;
	}

	return 0;
}