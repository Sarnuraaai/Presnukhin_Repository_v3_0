#include <iostream>
#include <cmath>
#include <string>
using namespace std;


float EnterNumberX(float x)
{
        cout << endl << "Введите вещественное число x" << endl << endl;
        cin >> x;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Неправильный ввод!" << endl;
            return 0;
        }
        cout << "Успешный ввод!" << endl;
        return x;
}

float EnterNumberY(float y)
{
    cout << endl << "Введите вещественное число y" << endl << endl;
    cin >> y;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Неправильный ввод!" << endl;
        return 0;
    }
    cout << "Успешный ввод!" << endl;
    return y;
}

int CalcInt(float x, float y)
{
    float func = 0, integer = 0;
    func = modf(abs(x - y), &integer);
    cout << endl << "Целая часть разности вещественных чисел равна = " << integer << endl << endl;
    return 0;
}

float CalcFloat(float x, float y)
{
    float func = 0, integer = 0;
    func = modf(abs(x - y), &integer);
    cout << endl << "Дробная часть разности вещественных чисел равна = " << func << endl << endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "RU");
    int n = 9;
    string s;
    float x = 0, y = 0;
    while (n != 0)
    {
        cout << endl << "1. Введите вещественное число х\n";
        cout << "2. Введите вещественное число y\n";
        cout << "3. Найти целую часть разности этих двух чисел\n";
        cout << "4. Найти дробную часть разности этих двух чисел\n" << endl;
        cout << "Введите номер желаемой функции или 0, если хотите завершить программу" << endl << endl;
        cin >> s;
        if (s.length() > 1 || ((s[0] != '1') && (s[0] != '2') && (s[0] != '3') && (s[0] != '4') && (s[0] != '0')))
        {
            do
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Неправильный ввод!" << endl;
                cout << "Введите номер желаемой функции или 0, если хотите завершить программу" << endl;
                cin >> s;
            } while (s.length() > 1 && (s[0] != '1') && (s[0] != '2') && (s[0] != '3') && (s[0] != '4') && (s[0] != '0'));
        }
        else
            n = stof(s);

        switch (n)
        {
        case 1:
            x = EnterNumberX(x);
            break;
        case 2:
            y = EnterNumberY(y);
            break;
        case 3:
            CalcInt(x, y);
            break;
        case 4:
            CalcFloat(x, y);
            break;
        }
    }
    cout << "Программа завершена.";
    return 0;
}

