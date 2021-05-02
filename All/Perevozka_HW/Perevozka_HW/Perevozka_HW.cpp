#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int bus = 50;
	int pass;
	int remain;
	int remain2;
	int count;
	int free;

	cout << "Скольк пассажиров ?" << endl;
	cin >> pass;
	remain2 = pass % bus;

	for (int i = 0; i < count; i++)
	{
		remain -= bus;
	}

	free = bus - remain;

	cout << free << endl;

	return 0;
}