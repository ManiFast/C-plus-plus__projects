#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int a;
	cout << "1. Число Пи\n2. Найти\n>";
	cin >> a;
	if (a == 1) {
		cout << "3,1415" << endl;
	}
	else if (a == 2) {
		int b, c, d, e, u;
		cout << "Введите градусы\n>";
		cin >> b;
		u = 180 % b;
		if (u == 0) {
			e = 180 / b;
			cout << "=n/" << +e << "\nn - число Пи" << endl;
		}
		else if (u == 1) {
			c = 180 / b;
			d = b * c;
			e = 180 - d;
			cout << "=n/" << +c << "," << +e << "\nn - число Пи" << endl;
		}
	}

	int stop;
	cin >> stop;
	return 0;
}