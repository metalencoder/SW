#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char ch;
	cout << "Введите номер задания: ";
	ch=_getch();
	switch (ch)
	{
	case '1':
		cout << "Введите целое число: ";
		int a;
		cin >> a;
		double b, x, c, z, y;
		b = (double)a / 10;
		x = a / 10;
		c = (b - x) * 10;
		z = (a / 100);
		y = x - z * 10;
		cout << z << endl;
		cout << y << endl;
		cout << c << endl;
		break;
	case '2':
		cout << "Введите номер дня недели: ";
		int day;
		cin >> day;
		switch (day)
		{
		case 1:cout << "Понедельник"; break;
		case 2:cout << "Вторник"; break;
		case 3:cout << "Среда"; break;
		case 4:cout << "Четверг"; break;
		case 5:cout << "Пятница"; break;
		case 6:cout << "Суббота"; break;
		case 7:cout << "Воскресенье"; break;
		default: cout << "Нет такого дня"; break;
		}
		break;
	}









}