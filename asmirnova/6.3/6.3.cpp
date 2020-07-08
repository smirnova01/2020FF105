#include <iostream>
using namespace std;

void conv(int n, int p) {
	if (n / p != 0) {
		conv(n / p, p);
	}
	cout << n % p;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, p;
	string m;
	cout << "Введите n:", cin >> n, cout << "\n";
	cout << "Введите p:", cin >> p, cout << "\n";
	conv(n, p);
	return 0;
}
