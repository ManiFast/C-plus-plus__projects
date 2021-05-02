#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//int a = 1, b = 5, c = 33;
	//cout << a << endl << b << endl << c << endl;

	// Массив
	int nums[3];
	// 1
	nums[0] = 1;
	// 2
	nums[1] = 5;
	// 3
	nums[2] = 33;
	//> 5
	cout << nums[1] << endl;
	//> 1
	cout << nums[0] << endl;
	//> 33
	cout << nums[2] << endl;

	// Нельзя
	//cout << nums[5];

	int arr[]{ 1,5,10,2 };
	// 10
	cout << arr[2] << endl;

	int arr1[10]{ 1,5,10,2 };
	cout << arr[6];

	cout << "---" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "|" << endl;
	}

	cout << "---" << endl;

	const int size = 5;
	int arr3[size]{ 5,21,45,10,2 };
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << endl;
	}

	cout << "---" << endl;

	return 0;
}