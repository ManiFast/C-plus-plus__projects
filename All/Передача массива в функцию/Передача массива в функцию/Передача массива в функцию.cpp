#include <iostream>
#include <ctime>

using namespace std;

void FillArray(int mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 11;	// 1 - 10
	}
}

void PrintArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 7;
	int arr[SIZE];

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);



	return 0;
}