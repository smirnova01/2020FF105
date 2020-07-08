#include<iostream>
using namespace std;
int main()
{
	int v, v1, t1, t2, s1, s2, S;
	setlocale(LC_ALL, "ru");
	cout << "Введите скорость лодки в стоячей воде ";
	cin >> v;
	cout << "Введите скорость течения реки ";
	cin >> v1;
	cout << "Время движения по озеру ";
	cin >> t1;
	cout << "Время против течения реки ";
	cin >> t2;
	s1 = t1 * v;
	s2 = (v - v1) * t2;
	S = s1 + s2;
	cout << "Путь пройденный лодкой по течению , против течения и общий ";
	cout << s1 « " " « s2 « " " « S;
}