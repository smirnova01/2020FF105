#include <iostream>
using namespace std;
int main()
{
	double x, y;
	setlocale(LC_ALL, "ru");
	cout << "Введите значение х ";
	cin >> x;
	y = (x - 10.0 * sin(x)) + (abs(pow(x, 4) - pow(x, 5)));
	cout << "Результат " « y;
}