#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//rand();
	// 0-33677

	//srand(15);
	srand(time(NULL));
	//точка каждый раз новая
	//int a = rand();
	//cout << a << endl;

	//a = rand()%10;
	////до 10 (0-9
	//cout << a << endl;

	//a = rand() % 2;
	////от 0 до 1 (0 или 1
	//cout << a << endl;

	//a = rand() % 11 + 5;
	////от 5 до 10 (5-15
	//cout << a << endl;

	//a = rand() % 10 + 5;
	////от 5 до 10 (5-14
	//cout << a << endl;

	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 11;
		//0-10
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}


	return 0;
}