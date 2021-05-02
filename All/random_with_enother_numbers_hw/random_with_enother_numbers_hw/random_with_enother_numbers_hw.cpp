#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];
	bool alreadyThere;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRandomValue = rand() % 11;

		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] == newRandomValue)
			{
				alreadyThere = 1;
			}
		}

		if (alreadyThere == false)
		{
			arr[i] = newRandomValue;
			i++;
		}

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}