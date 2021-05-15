#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int SIZE = 26;
	char letters[SIZE]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }; // 0-26
	up:
	char sim;
	// Сдвиг
	int pass = 64;
	//if (pass >= 26)
	//{
	//	// Доработать
	//	int res = pass %= 26;
	//	pass = res;
	//	cout << pass << endl;
	//}
	bool st = 0;


	cin >> sim;

	for (int i = 0; i < 27; i++)
	{
		if (sim == letters[i])
		{
			//int dic = pass;
			//dic--;
			if (i >= (SIZE - pass))
			{
				int b = pass, resure;
				b--;
				resure = (i + pass) % SIZE;

				cout << letters[resure];
			}
			else
			{
				int a = i;
				a += pass;
				cout << letters[a];
				st = 1;
			}
		}


		if (st == 1)
		{
			break;
		}
	}

	//cout << endl;


	//char sim1;
	//st = 0;

	//cin >> sim1;

	//for (int i = 0; i < 26; i++)
	//{
	//	//int a = (i - pass);
	//	if (sim1 == letters[i])
	//	{
	//		int a = i;
	//		a -= pass;
	//		cout << letters[a];
	//		st = 1;
	//	}

	//	if (!st)
	//	{
	//		break;
	//	}
	//}

	//cout << endl;

	goto up;


	return 0;
}