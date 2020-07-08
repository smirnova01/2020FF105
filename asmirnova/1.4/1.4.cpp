#include<iostream>
using namespace std;
int main()
{
	int x, y;
	bool z;
	setlocale(LC_ALL, "ru");
	cout << "Введите x ,y ";
	cin >> x >> y;
	z = 0;
	if ((x >= -5 && x <= -2) && (y >= 0 && y <= 6))
	{
		z = 1;
	}
	if ((x >= 2 && x <= 5) && (y >= 0 && y <= 6))
	{
		z = 1;
	}
	if ((x >= -2 && x <= 2) && (y >= 2 && y <= 6))
	{
		z = 1;
	}
	cout << z;
}