#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 1; i <= 30; i++)
	{
		if (i == 5)
		{
			continue;
		}

		switch (i)
		{
		case 10:
			continue;
			break;

		case 20:
			continue;
			break;
		}

		cout << "Переменная i = " << i << endl;
	}

	return 0;
}