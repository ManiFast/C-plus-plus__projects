#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	start:
	int difficulity;
	int setDiff;

	cout << "Сложность" << endl
		<< "1.Ez" << endl
		<< "2.Norm" << endl
		<< "3.Hard\n>";

	cin >> difficulity;	// Сложность

	if (difficulity == 1)
	{
		setDiff = 10;
	}
	else if (difficulity == 2)
	{
		setDiff = 100;
	}
	else if (difficulity == 3)
	{
		setDiff = 1000;
	}

	int randNumber = rand() % setDiff + 1;	// 1-9
	//cout << randNumber;
	int num;
	int again;
	int count = 1;	// Всеравно 1 попытка будет

	cout << endl << "Введите число\n>";

	up:
	cin >> num;
	if (num < randNumber)
	{
		cout << "Число больше" << endl;
		count++;
		goto up;
	}
	else if (num > randNumber)
	{
		cout << "Число меньше" << endl;
		count++;
		goto up;
	}
	else if (num == randNumber)
	{
		cout << endl << "В точку !\nЭто число " << randNumber << " (" << count << " попыток" << ")" << endl 
			<< "Хотите начать заново ?\n1.Да\n2.Нет" << endl;
		cin >> again;
		if (again == 1)
		{
			goto start;
		}
		else if (again == 2)
		{
			goto end;
		}
	}


	end:
	return 0;
}