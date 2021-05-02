#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	// 1
	// 1 - 70
	int arr[5]{};
	// 1 - 25
	int arr1[1]{};

	// 2
	// 1 - 69
	int arr2[5]{};
	// 1 - 26
	int arr3[1]{};

	// 3
	// 1 - 49
	int arr4[6]{};

	//int const SIZE = 6;
	//int arr[SIZE];
	int lens;
	cout << "Сколько билетов\n>";
	cin >> lens;
	for (int i = 0; i < lens; i++)
	{
		// 1
		cout << "Первый тур" << endl;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = rand() % 70 + 1;
		}

		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		arr1[0] = rand() % 26 + 1;
		cout << arr1[0] << " " << endl << endl;

		// 2
		cout << "Второй тур" << endl;
		for (int i = 0; i < 5; i++)
		{
			arr2[i] = rand() % 69 + 1;
		}

		for (int i = 0; i < 5; i++)
		{
			cout << arr2[i] << " ";
		}
		cout << endl;

		arr3[0] = rand() % 26 + 1;
		cout << arr3[0] << endl << endl;

		// 3
		cout << "Третий тур" << endl;
		for (int i = 0; i < 6; i++)
		{
			arr4[i] = rand() % 49 + 1;
		}

		for (int i = 0; i < 6; i++)
		{
			cout << arr4[i] << " ";
		}
		cout << endl << "---" << endl;
	}
	


	cout << endl << endl << endl << "Developed by Stas" << endl;
	// 21.01.21

	return 0;
}