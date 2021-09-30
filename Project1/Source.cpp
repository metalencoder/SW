#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите целое число: ";
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
}