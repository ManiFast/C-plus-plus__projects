#include <iostream>

int main()
{
	using namespace std;

	int a, b;
	a = 3;
	b = 5;

	a = max(a, b);
	a = max(6, a);
	//a = a & (b > 0);
	cout << a;


	return 0;
}