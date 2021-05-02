#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //int a;
    //cout << sizeof(a) << endl;
    //>4

    //const int SIZE = 10;
    int arr[]{5,26,437,12,0};
    // 1 int = 4 bat
    int a = sizeof(arr);
    int b = sizeof(int);
    cout << sizeof(arr) << endl;
    // arr = 16 bat
    // 1 int in arr = 4
    cout << sizeof(arr) / sizeof(int) << endl;
    //cout << sizeof(arr) / 4 << endl;

    //for (int i = 0; i < SIZE; i++)
    //{
    //    cout << arr[i] << endl;
    //}

    return 0;
}
