#include <iostream>
#include <thread>
#include <chrono>
#ifdef _WIN32
    #include <windows.h>
#endif
char choose;
double result;
void initConsole() 
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
}
void clearscreen()
{
    std::cout << "\033[2J\033[1;1H";
}

void russian()
{
    while(true)
    {
        clearscreen();
        double translate;
        std::cout << "Введите число: ";
        std::cin >> translate;
        if(translate)
        {
            std::cout << "Выберите операцию: \n1. Умножение (*)\n2. Деление (/)";
            std::cin >> choose;
            if(choose == '*' || choose == '1')
            {
                result = translate * 1024.0;
                std::cout << "Результат: " << result << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(4));
            }
            if(choose == '/' || choose == '2')
            {
                result = translate / 1024.0;
                std::cout << "Результат: " << result << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(4));
            }
        }
    }
}

void english()
{
    while(true)
    {
        clearscreen();
        double translate;
        std::cout << "Enter a number: ";
        std::cin >> translate;
        if(translate)
        {
            std::cout << "Choose an action: \n1. Multiple (*) \n2. Divide (/)";
            std::cin >> choose;
            if(choose == '*' || choose == '1')
            {
                double result = translate * 1024.0;
                std::cout << "Result: " << result << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(4));
            }
            if(choose == '/' || choose == '2')
            {
                result = translate / 1024.0;
                std::cout << "Result: " << result << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(4));
            }
        }
    }
}

int main()
{
    initConsole();
    std::cout << "Выберите язык/Choose a language \n1. Русский \n2. English" << std::endl;
    std::cin >> choose;
    if(choose == '1')
    {
        russian();
    }
    if(choose == '2')
    {
        english();
    }
    return 0;
}