#include <iostream>
#include <numeric>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;
	int N;
	cout << "Введите число N ";
	cin >> N;
	string s = to_string(N);
	const int M = accumulate(s.cbegin(), s.cend(), 1, [](const int x, const char y) { return x * (y - '0'); });
	cout << M << endl;
}