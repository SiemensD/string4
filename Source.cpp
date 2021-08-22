#include<iostream>
#include<string.h>


using namespace std;

void Exchange(char*& str, char simb, char dot)
{

	int size = strlen(str)+1;
	char* buf = new char[size];

	for (int i = 0, j=0; i < size; i++, j++)
	{
		if (str[i]!=dot)
		{
			buf[j] = str[i];
		}
		else
		{
			buf[j] = simb;
		}

		
		
	}
	buf[size] = '\0';

	str = buf;


}
void main()
{
	setlocale(0, "");

	char* str = new char[256];
	cout << "Введите строку содержащую символ точка: ";
	cin >> str;
	cout << endl;

	char simb = '!';
	char dot = '.';

	Exchange(str, simb, dot);
	
	cout << str;
	cout << endl;
	cout << endl;


}
/*Задание 4:
Написать программу, которая заменяет все символы точки "." 
в строке, введенной пользователем, на символы восклицательного 
знака "!".*/