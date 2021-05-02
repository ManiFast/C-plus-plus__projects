#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    const int ROW = 3;
    const int COL = 4;

    int arr[ROW][COL];
    /*_________
      | | | | |
      | |5| |7|
      | | | |8|
      _________*/

    cout << arr[1][1] << endl;
    arr[1][1] = 5;
    cout << arr[1][1] << endl;
    arr[1][3] = 7;
    cout << arr[1][3] << endl;
    arr[2][3] = 5;
    cout << arr[1][3] << endl;

    int arr1[ROW][COL]{};
    //00000

    //int arr2[2][4]{ 
    //    {1,2,3,4,5},
    //    {6,7,8,9,10},
    //};


    return 0;
}