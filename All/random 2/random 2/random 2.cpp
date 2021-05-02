#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int const SIZE = 6;
	int arr[SIZE];
	int lens;

	cout << "Сколько строчек\n>";
	cin >> lens;

	for (int i = 0; i < lens; i++)
	{
		for (int i1 = 0; i1 < SIZE; i1++)
		{
			arr[i1] = rand() % 10;
		}

		for (int i2 = 0; i2 < SIZE; i2++)
		{
			cout << arr[i2];
		}

		cout << endl;
	}

	cout << " Developed by Stas" << endl;

	return 0;
}