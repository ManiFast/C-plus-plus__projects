#include <iostream>

using namespace std;

int search(int a)
{
	int b = a;
	b--;

	int c;
	c = ((b * a) / 2);

	cout << c << endl;

	return 0;
}

int find(int a)
{
	int arr[10], b;

	for (int i = 0; i < a; i++)
	{
		arr[i] = i;
	}

	bool flag = false;

	for (int i = 0; i < a; i++)
	{
		int a, b;
		a = arr[i];
		b = arr[i++];

		if (flag == false)
		{
			b = a + b;

			flag = true;
		}
		else if (flag == true)
		{
			b = b + a++;

			flag = true;
		}

		cout << endl << b << endl;
	}

	cout << b;

	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Введите число" << endl;
	int num, num1, var;
	cin >> num;
	//cout << "Включительно ?\n1.Да\n2.Нет" << endl;
	//cin >> var;

	search(num);

	cout << "Введите число" << endl;
	cin >> num1;
	

	find(num1);

	return 0;
}