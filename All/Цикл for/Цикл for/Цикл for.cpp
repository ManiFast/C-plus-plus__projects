#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Начало цикла" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "Переменная i = " << i << endl;
	}
	cout << "Конец цикла" << endl;

	int a;
	cout << "Введите число\n>";
	cin >> a;
	for (int c = 1; c <= a; c++)
	{
		cout << "число = " << c << endl;
	}

	return 0;
}