#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	int a, result;
	cout << "Введите число: \n>";
	cin >> a;
	result = a % 2;
	cout << result << endl;
	if (result == 0) {
		cout << "Число четное" << endl;
	}  else if (result == 1) {
		cout << "Число нечетное" << endl;
	}  else {
		cout << "Ошибка !" << endl;
	}

	int stop;
	cin >> stop;

	return 0;
}