#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int bus = 50;
	int pass;
	int remain;
	int count;
	int free;

	cout << "Скольк пассажиров ?" << endl;
	cin >> pass;
	count = pass / bus;

	if (count == 0)
	{
		remain = pass;
	}

	for (int i = 0; i < count; i++)
	{
		remain = pass - bus;
		pass = remain;
	}

	if (remain == 0)
	{
		free = remain;
	}
	else
	{
		free = bus - remain;
	}

	cout << free << endl;


	return 0;
}