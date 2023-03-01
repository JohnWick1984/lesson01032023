// 1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;


int main()
{
	setlocale(0, "");

	string str("Если тебе тяжело, значит ты поднимаешься в гору. Если тебе легко, значит ты летишь в пропасть 3456936946.");
	int counSymbol = 0, countNumber = 0, countChar = 0;
	
	int abs = 0;

	int stringSize = str.length();
	for (int i = 0; i < stringSize; i++)
	{
		if (str[i] == ' ')
		{
			counSymbol++;
		}
		else if (isdigit(str[i]))
		{
			countNumber++;
		}
		else
		{
			countChar++;
		}

	}
	cout << counSymbol;
	cout << countNumber;
	cout << countChar;
}

