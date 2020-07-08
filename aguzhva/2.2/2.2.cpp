#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, c;
    cout << "Введите числа  ";
    cin >> a >> b >> c;
    if (fabs(a - b) == fabs(a - c)) cout << "Точки b и с находятся на одинаковом расстоянии от точки а" << endl;
    else  if (fabs(a - b) > fabs(a - c)) cout << "Точка с находится ближе к точке а" << endl;
    else cout << "Точка b находится ближе к точке а" << endl;
    system("PAUSE");
}
