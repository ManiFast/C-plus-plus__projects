#include <iostream>

using namespace std;

//;=========================
//;  Функция вывода 0 и 1
//;==========

int WriteMode(bool a = 0)
{
	up:
	a = 1;
	cout << a << endl;
	a = 0;
	cout << a << endl;
	goto up;

	//return 0;
}

int main()
{
	//int a;
	WriteMode();


	return 0;
}