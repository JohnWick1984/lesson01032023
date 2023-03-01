// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;


bool check_polindrom(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	setlocale(0, "");
	string str;
	cout << "Введите слово: ";
	cin >> str;
	if (check_polindrom(str))
	{
		cout << "Слово полидром.";
	}
	else
	{
		cout << "Слово не полидром";
	}
	return 0;
}