#include <cmath>
#include <iostream>

using namespace std;      
int main(char* args[])
{
	int x, y;
	cin >> x >> y; //Считывание
	cout << endl << "Resoult:" << pow(1 - tan(x), 1 / tan(x)) + cos(x - y); //pow(число, степень)
	return 0;
}