#include <iostream>

using namespace std;

//=============================
// [MEGASLIV.BIZ] 10.1 Zadanie4
//==============

int main()
{
	cout << "1:" << endl;
	int health = 3;
	health--;
	health++;
	cout << health << endl << endl;

	cout << "2:" << endl;
	int coins = 10;

	cout << coins << endl; // 5
	coins--;
	cout << coins << endl; // 4
	coins++;
	cout << coins << endl; // 5
	coins--;
	cout << coins << endl; // 4
	coins++;
	cout << coins << endl; // 5
	coins--;
	cout << "\033[31m" << coins << "\033[0m" << endl; // 4


	return 0;
}