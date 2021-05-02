#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	for (int a = 1; a <= 3; a++)
	{
		cout << "Сработал 1й цикл for, итерация № " << a << endl;

		for (int b = 1; b <= 3; b++)
		{
			cout << "\tСработал 2й цикл for, итерация № " << b << endl;
		}
	}


	return 0;
}