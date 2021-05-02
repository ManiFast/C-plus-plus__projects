#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Hello World!! Привет" << endl;
	cout << "Hello World!! Привет\n!\n";
	cout << "Hello World!! Привет\t\t\t!\t!       !\n";
	// 7
	cout << "\"Hello World!!\\ Привет!\'\n\n";
	// ewewe

	cout << "\t\t\t\<<ЗОЛОТОЕ СЛОВО СВЯТОСЛАВА\>>\n\n";
	cout << "...И тогда великий Святослав\nИзрозил своё златое слово,\nСо слезами смешано, сказав:\n\<<О сыны, не ждал я зла\n\t\t     такого!\n\n";
	cout << "Загубили юность вы свою,\nНа врага не вовремя напали,\nНе с великой честию в бою\nВражью кровь на землю\n\t\t   проливали.\n" << endl;

	cout << "\t\t---------------------------\n\n";
	cout << "\t\t  Дождусь ее и вынужу признанье:\n\t\tКто наконец ей мил? Молчалин! Скалозуб!\n\t\t  Молчанин прежде был так глуп!..\n\t\t  Жалчайшее созданье!\n";
	cout << "\t\t  Уж разве поумнел?.. А вот -\n\t\t  Хрипун, удавленник, фагот,\n\t\tСозвездие маневров и мазуки!\n\t\t  Судьба любви - игрть ей в жмурки,\n\t\tА мне..\n";
	cout << "\t\t\t(Входит София)\n";
	cout << "\t\t  Вы здесь? я очень рад.\n\t\tЯ этого желал.\n\n";
																																								
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, FOREGROUND_RED);
	cout << "It`s red !\n" << endl;

	SetConsoleTextAttribute(console, FOREGROUND_BLUE);
	cout << "It`s blue" << endl;

	SetConsoleTextAttribute(console, FOREGROUND_INTENSITY);
	cout << "Stas";

	system("color 09");
	cout << "Matrix has you\n";

	/*0 = черный
	1 = синий
	2 = зеленый
	3 = голубой
	4 = красный
	5 = лиловый
	6 = желтый
	7 = белый
	8 = серый
	9 = светло - синий
	a = светло - зеленый
	b = светло - голубой
	c = светло - красный
	d = светло - лиловый
	e = светло - желтый
	f = ярко - белый*/

	return 0;
}