#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите число\n>";
	cin >> a;
	switch (a) {
		case 1:
			cout << "Вы ввели число 1" << endl;
			break;

		case 2: {
			cout << "Вы ввели число 2" << endl;
			break;
		}

		default: {
			cout << "Error" << endl;
			break;
		}
	}

	cin >> a;
	return 0;
}