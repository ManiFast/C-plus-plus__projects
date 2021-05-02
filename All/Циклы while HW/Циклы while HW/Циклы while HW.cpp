#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int col, type, var = 1;
	char x;

	cout << "Число символов:\n>";
	cin >> col;
	cout << "Какой символ:\n>";
	cin >> x;
	cout << "Выберите тип:" << endl
		<< "1. Горизонтальная\n2. Вертикальная\n>";
	cin >> type;
	//cout << col << x << type;

	switch (type) {
	case 1: {
		cout << endl;
		while (var <= col) {
			cout << x;
			var++;
		}
	} case 2: {
		cout << endl;
		while (var <= col) {
			cout << x << endl;
			var++;
		}
	} default: {
		cout << "Error.";
		break;
	}
	}


	/*if (type == 1) {
		cout << endl;
		while (var <= col) {
			cout << x;
			var++;
		}
	}
	else if (type == 2) {
		cout << endl;
		while (var <= col) {
			cout << x << endl;
			var++;
		}
	}
	else {
		cout << "Error.";
	}*/


	return 0;
}