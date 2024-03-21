#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <sstream>
#include <Windows.h>

//Функция для переворачивания строки для задание 2!
 string abc1(const string & abc2)
    {
        string abc3 = abc2;
        reverse(abc3.begin(), abc3.end());
        return abc3;
    }
 //Задание 1 последовательность символов
int main()
{
    //Русские консоль
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string ab;
    cout << "Введите строку: ";
    //Считывание чтроки из консола
    getline(cin, ab);
    reverse(ab.begin(), ab.end());
    cout << "Строка в обратном порядке: " << ab << endl;

    //Задание 2.  первернутыми словами
        string abc;
        cout << "Введите строку: ";
        //Считывание чтроки из консола
        getline(cin, abc);
        istringstream iss(abc);
        string word;
        string result;
        //Разбиение строки на слова и переворачиванние каждого слово
        while (iss >> word)
        {
            result += abc1(word) + " ";
        }
        cout << "Строка в первернутыми словами: " << result << endl;
        return 0;
    
}

