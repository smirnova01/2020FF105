#include<iostream>
using namespace std;
int main()
{
	int N, n1, n2, n3;
	setlocale(LC_ALL, "ru");
	cout << "Введите трехзначеное число ";
	cin >> N;
	n3 = N % 10;
	n2 = (N / 10) % 10;
	n1 = (N / 100) % 10;
	if (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0)
	{
		cout<<"True";
	}
	else
		cout<<"False";
}