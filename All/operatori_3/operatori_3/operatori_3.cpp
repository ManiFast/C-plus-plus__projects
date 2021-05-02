#include <iostream>
#include <windows.h> // Color

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    /* ОПЕРАТОРЫ */

    // Унарные
    int a = 5;
    cout << a << endl; //=5
    a = -a;
    cout << a << endl; //=-5

    // Бинарные
    /*
    ________________________________
    |Сложение          | + | 5+5=10|
    |Вычитание         | - | 10-5=5|
    |Умножение         | * | 5*2=10|
    |Деление           | / | 5/2=2 | 
    |Деление по модулю | % | 5%2=1 |
    |Равен      | == |     | = + = |
    |Не равен   | != |     | ! + = |
    |Меньше     |  < |     |       |
    |Больше     |  > |     |       |
    |Меньше или равно| <=  | < + = |
    |Больше или равно| >=  | > + = |
    |______________________________|
    */

    int b = 5, c = 5, d;
    d = b + c;
    cout << d << endl; //=10

    int e = 3, f = 2;
    cout << e + f << endl; //=5
    cout << e - f << endl; //=1
    cout << e * f << endl; //=6
    cout << e / f << endl; //=1

    int g;
    g = 2 + 2 * 2;
    cout << g << endl; //=6

    int h;
    h = (2 + 2) * 2;
    cout << h << endl; //=8

    cout << "---" << endl;

    /*ДЗ: Введите три числа и вывелите на экран значение суммы,
    произведения, разности и ср. ариф. этих чисел*/

    /*int var, var2, var3;
    cout << "Введите 3 числа" << endl;
    cout << "1: ";
    cin >> var;
    cout << "2: ";
    cin >> var2;
    cout << "3: ";
    cin >> var3;
    cout << endl << "Сумма = " << var + var2 + var3 << "\n" << "Произведение = " << var * var2 * var3 << "\n" << "Разнось = " << var - var2 - var3 << "\n" << "Ср. Ариф. = " << (double)(var + var2 + var3) / 3 << endl;
    system("color 02");*/
    cout << "Powered by ";
    //system("pause");

    // Color
    /*HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, FOREGROUND_BLUE);
    printf("Stas.");
    SetConsoleTextAttribute(console, FOREGROUND_GREEN);*/

    /* ИНКРЕМЕНТ И ДЕКРИМЕНТ */
    cout << "\n---\n=>ИНКРЕМЕНТ И ДЕКРИМЕНТ\n";

    int k = 1;
    cout << k + 1 << endl;
    k++;
    cout << k << endl;
    int l = 5;
    l--;
    cout << l << endl;

    int v = 10, t;
    t = ++v * v;
    cout << t << endl;
    cout << v << endl;

    /* Сокращенные арифметические формы */
    cout << "---\n=>Сокращенные арифметические формы" << endl;

    int r = 0;
    cout << r << endl;

    r = r + 10;
    cout << r << endl;

    r += 10;
    cout << r << endl;

    r /= 5;
    cout << r << endl;


    return 0
}