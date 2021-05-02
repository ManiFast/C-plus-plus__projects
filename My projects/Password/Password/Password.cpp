#include <iostream>
#include <string>
#include <Windows.h>


void check_pass(std::string password)
{
    std::string valid_pass = "qwerty123";
    std::cout << std::endl << "Проверка пароля";
    Sleep(300);
    std::cout << "\033[33m.";
    Sleep(300);
    std::cout << ".";
    Sleep(300);
    std::cout << ".\033[0m" << std::endl;
    Sleep(500);
    if (password == valid_pass)
    {
        std::cout << "\033[32mДоступ разрешен.\033[0m" << std::endl;
    }
    else
    {
        std::cout << "Неверный пароль!" << std::endl;
    }
}

void colorful(std::string simvol)
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            std::cout << "\033[30m" << simvol << std::endl;
        }
        if (i == 1)
        {
            std::cout << "\033[31m" << simvol << std::endl;
        }
        if (i == 2)
        {
            std::cout << "\033[32m" << simvol << std::endl;
        }
        if (i == 3)
        {
            std::cout << "\033[33m" << simvol << std::endl;
        }
        if (i == 4)
        {
            std::cout << "\033[34m" << simvol << std::endl;
        }
        if (i == 5)
        {
            std::cout << "\033[35m" << simvol << std::endl;
        }
        if (i == 6)
        {
            std::cout << "\033[36m" << simvol << std::endl;
        }
        if (i == 7)
        {
            std::cout << "\033[37m" << simvol << "\033[0m" << std::endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    std::string user_pass;

    std::cout << "Введите пароль: " << std::endl;
    std::getline(std::cin, user_pass);
    check_pass(user_pass);

    // \033[0m - color
    //------------------------------
    // "\033[30m"      Black
    // "\033[31m"      Red
    // "\033[32m"      Green
    // "\033[33m"      Yellow
    // "\033[34m"      Blue
    // "\033[35m"      Magenta
    // "\033[36m"      Cyan
    // "\033[37m"      White

    //std::cout << "\033[1mStas\033[0m" << std::endl;

    std::string a;
    std::cin >> a;

    Sleep(1000);
    colorful(a);

    return 0;
}