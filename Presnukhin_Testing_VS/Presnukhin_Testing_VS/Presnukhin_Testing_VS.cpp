#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool UserInput(string input)
{
	if (input.empty())
	{
		//cin.clear();
		//cin.ignore(32767, '\n');
		return false;
	}
	try
	{
		float number = stof(input);
	}
	catch (...)
	{
		//cin.clear();
		//cin.ignore(32767, '\n');
		return false;
	}

	return true;
}

float EnterNumberX()
{
	string str_x;
	cout << "Введите вещественное число x" << endl;
	cin >> str_x;
	while (!UserInput(str_x))
	{
		cout << "Неправильный ввод!" << endl;
		cout << "Введите вещественное число x" << endl << endl;
		cin >> str_x;
	}
	cout << "Успешный ввод!" << endl;
	return stof(str_x);
}

float EnterNumberY()
{
	string str_y;
	cout << "Введите вещественное число y" << endl;
	cin >> str_y;
	while (!UserInput(str_y))
	{
		cout << "Неправильный ввод!" << endl;
		cout << "Введите вещественное число y" << endl << endl;
		cin >> str_y;
	}
	cout << "Успешный ввод!" << endl;
	return stof(str_y);
}
/*
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
*/

int CalcInt(float x, float y)
{
	float func = 0, integer = 0;
	func = modf(abs(x - y), &integer);
	cout << endl << "Целая часть разности вещественных чисел равна = " << integer << endl << endl;
	return integer;
}

float CalcFloat(float x, float y)
{
	cout << x << endl << y << endl;
	float func = 0, integer = 0;
	func = modf(abs(x - y), &integer);
	cout << endl << "Дробная часть разности вещественных чисел равна = " << func << endl << endl;
	return func;
}

int main()
{
	setlocale(LC_ALL, "RU");
	int n = 9;
	string s;
	float y = 0;
	float x = 0;
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
				cout << "Неправильный ввод!" << endl;
				cout << "Введите номер желаемой функции или 0, если хотите завершить программу" << endl;
				cin >> s;
			} while (s.length() > 1 && (s[0] != '1') && (s[0] != '2') && (s[0] != '3') && (s[0] != '4') && (s[0] != '0'));
		}
		else
			n = stoi(s);

		switch (n)
		{
		case 1:
			x = EnterNumberX();
			break;
		case 2:
			y = EnterNumberY();
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

