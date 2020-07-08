#include"iostream"
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int* a, n, l, i, j, count, x;
	srand(time(NULL));
	cout << "Введите количество элементов ";
	cin >> n;
	cout << endl;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
		cout << endl;
	}
	count = 0;
	for (i = 0; i < n; ++i)//находим количество одинаковых элементов
		for (j = i; j < n; ++j)
			if ((i != j) && (a[i] == a[j]))
			{
				++count;
				break;
			}
	x = n - count * 2;
	cout << "Количество различных чисел " << x << "\n";


	_getch();
	return 0;
}
