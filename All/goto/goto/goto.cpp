#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    goto upper;
    cout << "4" << endl;
    cout << "5" << endl;
    cout << "6" << endl;
    cout << "7" << endl;
    upper:
    cout << "8" << endl;
    cout << "9" << endl;
    cout << "10" << endl << endl;

    //inf:
    //cout << "Hello World!" << endl;
    //goto inf;
    
    return 0;
}