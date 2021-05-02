#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    cout << "Калькулятор №1" << std::endl;
    int a, b, c;
    cout << "Введите числа:\n>>";
    cin >> a;
    cin >> b;
    cout << "1. Сложить\n2. Отнять\n3. Умножить\n4. Разделить\n>";
    cin >> c;
    switch (c) {
    case 1: {
        cout << (a + b) << endl;
        break;
    }

    case 2: {
        cout << (a - b) << endl;
        break;
    }

    case 3: {
        cout << (a * b) << endl;
        break;
    }

    case 4: {
        cout << (a / b) << endl;
        break;
    }

    default: {
        cout << "Error" << endl;
    }
    }

    cin >> a;
    return 0;
}