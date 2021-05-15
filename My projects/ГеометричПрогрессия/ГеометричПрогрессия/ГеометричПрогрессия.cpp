#include <iostream>
//#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Введите Sn b1 q (Напр Sn=189 b1=3 q=2)" << endl;
	up:

	int sn, b1;
	float q;
	cin >> sn >> b1 >> q;

	int conv, step, sqr = 0;
	conv = sn * -1;

	step = (conv / b1) - 1;

	// Нахождение  степени числа
	if (step / q)
	{
		while (step / q != 0)
		{
			step /= q;
			sqr++;
		}
	}

	cout << "\033[35m" << sqr << "\033[0m" << endl << endl;
	cout << "Введите Sn b1 q" << endl;

	goto up;

	// Dosen`t have exit.
	return 0;
}