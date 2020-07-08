#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, y1, x2, y2, x, y;
	cout << "Введите A(x1,y1) и B(x2,y2)\n";
	cin >> x1 >> y1 >> x2 >> y2;
	x = sqrt((x1 * x1) + (y1 * y1));
	y = sqrt((x2 * x2) + (y2 * y2));
	if (x > y)
	{
		cout << "B ближе";
	}
	else
		cout << "A ближе";
}