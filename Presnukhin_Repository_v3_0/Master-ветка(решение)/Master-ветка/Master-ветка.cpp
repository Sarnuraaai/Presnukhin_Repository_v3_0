
#include <iostream>
#include <cmath>
using namespace std;

float EnterNumberX(float x)
{

}

float EnterNumberY(float y)
{
}

int CalcInt(float x, float y)
{

}

float CalcFloat(float x, float y)
{

}

int main()
{
    setlocale(LC_ALL, "RU");
    int n = 9;
    float x = 0, y = 0;
    while (n != 0)
    {
        cout << endl << "1. Введите вещественное число х\n";
        cout << "2. Введите вещественное число y\n";
        cout << "3. Найти целую часть разности этих двух чисел\n";
        cout << "4. Найти дробную часть разности этих двух чисел\n" << endl;
        cout << "Введите номер желаемой функции или 0, если хотите завершить программу" << endl << endl;
        cin >> n;
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
