#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Starting..." << endl;
	up:
	int a, b, c;

	cout << "1е число\n>";
	cin >> a;
	cout << "1. +\n2. -\n3. *\n4. /\n>";
	cin >> c;
	cout << "2е число\n>";
	cin >> b;

	switch (c)
	{
	case 1:
		cout << (a + b) << endl << endl;
		break;

	case 2:
		cout << (a - b) << endl << endl;
		break;

	case 3:
		cout << (a * b) << endl << endl;
		break;

	case 4:
		cout << (a / b) << endl << endl;
		break;
	}

	system("pause");
	system("cls");
	goto up;

	return 0;
}