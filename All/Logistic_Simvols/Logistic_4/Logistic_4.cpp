#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    /*Логические операции*/
    //<= < > >= ==> <== >=> !=

    cout << (4 <= 5) << endl;
    //=1
    cout << (4 > 5) << endl;
    //=0
    cout << (4 == 5) << endl;
    //=0
    cout << (4 != 5) << endl;
    //=1
    
    /*
    == (= + =) - равно
    != (! + =) - не равно
    && - и
    || - или
    */

    int a = 3;
    int b = 3;
    int c = 5.5;
    int d = 5.6;

    cout << (a == b) << endl;
    //=1
    cout << (c < d) << endl;
    //=
    cout << !(a == b) << endl;
    //=0

    cout << ((a == b) && (5 > 4));
    //=1
    cout << ((a == b) && (5 < 4) && (1 == 1));
    //=0
    cout << ((3 == 3) || (2 > 1));
    //=1
    cout << ((3 != 3) || (5 == 5));
    //=1

    return 0;
}