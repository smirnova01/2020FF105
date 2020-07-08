#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	double a, P;
	cin >> a >> n;
	P = a;
	for (i = 1; i <= n; i++)
		P = P * (a - i * n);
	cout << P << endl;
	system("pause");
}
