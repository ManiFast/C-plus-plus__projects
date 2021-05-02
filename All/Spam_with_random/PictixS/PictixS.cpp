#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int a, b;

	cin >> b;

	if (b == 1)
	{
		for (int i = 0; i < 2; )
		{
			a = rand() % 2;
			cout << a;
		}
	}
	else if (b == 2)
	{
		for (int i = 0; i < 2; )
		{
			cout << "Stas XD ";
		}
	}


	return 0;
}