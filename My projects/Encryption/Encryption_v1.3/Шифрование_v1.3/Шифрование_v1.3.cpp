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
	int pass = 5;
	bool st = 0;


	cin >> sim;

	for (int i = 0; i < 27; i++)
	{
		if (sim == letters[i])
		{
			//int dic = pass;
			//dic--;
			if (i == (SIZE - pass))
			{
				int b = pass;
				b--;

				cout << letters[b];
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