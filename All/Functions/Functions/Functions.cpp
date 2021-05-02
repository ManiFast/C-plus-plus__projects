#include <iostream>

using namespace std;

void foo()
{
	cout << "Nicee" << endl;
}

int sum(int a, int b)
{
	int res = a + b;
	cout << res << endl;
	return res;
}

int main()
{
	setlocale(LC_ALL, "ru");

	foo();
	sum(7, 5);


	return 0;
}