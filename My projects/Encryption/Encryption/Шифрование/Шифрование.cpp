#include <iostream>
#include <string>

using namespace std;

int main()
{
	char letters[]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	up:
	char sim;
	// Сдвиг
	int pass = 1;
	bool st = 0;


	cin >> sim;

	for (int i = 0; i < 26; i++)
	{
		if (sim == letters[i])
		{
			int a = i;
			a += pass;
			cout << letters[a] << endl;
			st = 1;
		}

		if (st != 0)
		{
			break;
		}
	}
	
	goto up;


	return 0;
}