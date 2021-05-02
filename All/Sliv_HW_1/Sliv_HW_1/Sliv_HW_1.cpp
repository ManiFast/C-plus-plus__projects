#include <iostream>

using namespace std;

//=============================
// [MEGASLIV.BIZ] 8.1 Zadanie3
//===============

int main()
{
	int sum_of_coins;
	cin >> sum_of_coins;

	int result;
	// 500, 430, 690
	int a = 500, b = 320, c = 690;

	result = (a * 2) + 690 - (430 * 2);
	sum_of_coins -= result;

	cout << sum_of_coins;


	return 0;
}