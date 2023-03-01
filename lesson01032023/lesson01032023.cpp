// lesson01032023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(0, "");

	string str("Если тебе тяжело, значит ты поднимаешься в гору. Если тебе легко, значит ты летишь в пропасть.");
	string result = "";


	while (str.find(" ", 0) != str.npos)
	{
		result = str.replace(str.find(" "), 1, "\t");
	}


	
	cout << result;
}