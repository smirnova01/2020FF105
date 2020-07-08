#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double x, F;
    cout << "Введите x: ";
    cin >> x;
    if (x <= 2) F = x * x + 4 * x + 5;
    else F = 1 / (x * x + 4 * x + 5);
    cout << "F(x)= " << F << endl;
    system("PAUSE");
}
