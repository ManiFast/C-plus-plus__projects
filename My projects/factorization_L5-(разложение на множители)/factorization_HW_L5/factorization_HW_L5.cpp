#include <iostream>

using namespace std;

void scum(int var)
{
	if (var == 0)
	{
		cout << "0 error" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	up:
	int64_t var;
	int a;
	int remainder;
	int remainder1;
	cout << "Введите число:" << endl;
	cin >> var;

	scum(var);

	//if (var / 100000000)
	//{
	//	a = var / 100000000;
	//	// 51 = 251 - 200
	//	remainder = var - (a * 100000000);
	//	remainder1 = var - remainder;
	//	cout << remainder1 << "\033[33m|\033[0m";
	//	var = remainder;
	//}
	//if (var / 10000000)
	//{
	//	a = var / 10000000;
	//	// 51 = 251 - 200
	//	remainder = var - (a * 10000000);
	//	remainder1 = var - remainder;
	//	cout << remainder1 << "\033[33m|\033[0m";
	//	var = remainder;
	//}
	//if (var / 1000000)
	//{
	//	a = var / 1000000;
	//	// 51 = 251 - 200
	//	remainder = var - (a * 1000000);
	//	remainder1 = var - remainder;
	//	cout << remainder1 << "\033[33m|\033[0m";
	//	var = remainder;
	//}
	if (var / 100000)
	{
		a = var / 100000;
		// 51 = 251 - 200
		remainder = var - (a * 100000);
		remainder1 = var - remainder;
		cout << remainder1 << "\033[33m|\033[0m";
		var = remainder;
	}
	if (var / 10000)
	{
		a = var / 10000;
		// 51 = 251 - 200
		remainder = var - (a * 10000);
		remainder1 = var - remainder;
		cout << remainder1 << "\033[33m|\033[0m";
		var = remainder;
	}
	if (var / 1000)
	{
		a = var / 1000;
		// 51 = 251 - 200
		remainder = var - (a * 1000);
		remainder1 = var - remainder;
		cout << remainder1 << "\033[33m|\033[0m";
		var = remainder;
	}
	if (var / 100)
	{
		a = var / 100;
		// 51 = 251 - 200
		remainder = var - (a * 100);
		remainder1 = var - remainder;
		cout << remainder1 << "\033[33m|\033[0m";
		var = remainder;
	}
	if (var / 10)
	{
		a = var / 10;
		// 51 = 251 - 200
		remainder = var - (a * 10);
		remainder1 = var - remainder;
		cout << remainder1 << "\033[33m|\033[0m";
		var = remainder;
	}
	if (var / 1)
	{
		if (var == 1)
		{
			cout << "1";
		}
		else
		{
			a = var / 1;
			// 51 = 251 - 200
			remainder = var - (a * 1);
			remainder1 = var - remainder;
			cout << remainder1 << "\033[33m|\033[0m";
			var = remainder;
		}
	}


	//-------------------
	cout << endl << endl;
	goto up;
	system("pause");
	return 0;
}