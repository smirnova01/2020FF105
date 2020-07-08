#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, g, k, i;
	k = 0;
	for (x = 0; x <= 15; x++) {
		g = x * x + x + 17;
		for (i = 2; i <= g - 1; i++)
			if (g % i == 0) k++;
		if (k == 0) cout << "При х= " << x << ", g= " << g << " - простое число" << endl;
	}
	system("pause");
}
