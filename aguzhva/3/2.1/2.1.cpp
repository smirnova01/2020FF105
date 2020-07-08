#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, c, k;
    k = 0;
    cout << "Введите числа  ";
    cin >> a >> b >> c;
    if (a >= 0) k++;
    if (b >= 0) k++;
    if (c >= 0) k++;
    cout << "Положительных числе - " << k << endl;
    return 0;
}


