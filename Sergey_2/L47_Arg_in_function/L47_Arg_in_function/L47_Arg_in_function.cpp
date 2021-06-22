#include <iostream>

using namespace std;

/* Аргументы по умолчанию */

void foo(int a = 5, double b = 0.5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#";
	}
}

int main()
{
	foo(4);


	return 0;
}