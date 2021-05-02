#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 11;
	// до 10
	int arr[SIZE];
	// до 20

	for (int i = 0; i < SIZE; i++)
	{
		up:
		int random = rand() % 21;

		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] == random)
			{
				goto up;
			}
		}

		arr[i] = random;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}