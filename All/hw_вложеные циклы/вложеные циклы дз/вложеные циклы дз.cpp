#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "Введите высоту, шырину и символ нап(5 3 *)\n>";
	cin >> a;
	cin >> b;
	for (int i = 0; i < a; i++)
	{
		cout << endl;
		for (int j = 0; j < b; j++)
		{
			cout << "* ";
		}
	}

	int i = 0, j = 0;
	while (i < a)
	{
		cout << endl;
		while (j < b)
		{
			cout << "* ";
			j++;
		}
		// Обнуление j
		j = 0;
		i++;
	}

	cout << endl << endl << endl;
	system("pause");
	return 0;
}