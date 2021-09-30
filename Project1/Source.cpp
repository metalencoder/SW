#include<iostream>
#include<conio.h>
#include<math.h>
#include<sstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char ch;
	int n, k, i = 0;
	stringstream dd;
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

	case'3':
		cout << "Введите два целых числа n и k: ";
		
		cin >> n >> k;
		dd << n;
		while (i != k)
		{
			cout << dd.str()[i];
			i++;
		}
		break;
	case '4':
		setlocale(LC_ALL, "rus");
		int x1, x2, x3, y1, y2, y3; //X - размеры кирпича, Y - размеры отверстия
		cout << "Введите размеры отверстия : высота : "; cin >> y1;
		cout << "Введите размеры отверстия : длинна : "; cin >> y2;
		cout << "Введите размеры отверстия : ширина : "; cin >> y3;
		cout << "Введите размеры параллелепипеда : высота : "; cin >> x1;
		cout << "Введите размеры параллелепипеда : длинна : "; cin >> x2;
		cout << "Введите размеры параллелепипеда : ширина : "; cin >> x3;
		if (y1 == x1 || y1 < x1 || y1 > x1) //Совпадение по высоте
		{
			if (y1 == x1)cout<< "Высоты совпали\n";
			if (y1 < x1)cout<< "Размер отверстия по высоте меньше высоты параллелепипеда\n";
			if (y1 > x1)cout<< "Размер отверстия по высоте больше высоты параллелепипеда\n";
		}
		if (y2 == x2 || y2 < x2 || y2 > x2) //Совпадение по длинне
		{
			if (y2 == x2)cout<< "Длина совпала\n";
			if (y2 < x2)cout<< "Размер отверстия по длине меньше длины параллелепипеда\n";
			if (y2 > x2)cout<< "Размер отверстия по длине больше длины параллелепипеда\n";
		}
		if (y3 == x3 || y3 < x3 || y3 > x3) //Совпадение по ширине
		{
			if (y3 == x3)cout<< "Ширина совпала\n";
			if (y3 < x3)cout<< "Размер отверстия по ширине меньше ширины параллелепипеда\n";
			if (y3 > x3)cout<< "Размер отверстия по ширине больше ширины параллелепипеда\n";
		}
	}

	 
		












}