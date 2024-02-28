#include <iostream>
#include <algorithm>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    int g = 0;
    string word = "";
    while (g != 5) 
    {
        cout << "Введите слово: ";
        cin >> word;
        cout << "Выберите функцию:\n1. reverse\n2. removeVow\n3. removeCon\n4. shuffle\n5. Выйти\n";
        cin >> g;
        if (g == 1) 
        {
            reverse(word.begin(), word.end());
            cout << "\n" << word << "\n";
        }
        if (g == 2)
        {
        }
        if (g == 3)
        {
        }
        if (g == 4)
        {
            random_shuffle(word.begin(), word.end());
            cout << "\n" << word << "\n";
        }
        if (g > 5 || g < 1) 
        {
            cout << "\nПроизошла ошибка. Вы ввели: " << g << "\n";
        }
    }
}