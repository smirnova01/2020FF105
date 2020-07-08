#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, c, dt;
    int  i;
    cout << "Введите день, месяц и год: ";
    cin >> a >> b >> c;
    dt = 0;
    if (b == 1) dt = a;
    for (i = 1; i <= (b - 1); i++) {
        if (i == 1) dt = dt + 31;
        if (i == 2)
            if (c / 4 != 0) dt = dt + 28;
            else dt = dt + 29;
        if (i == 3) dt = dt + 31;
        if (i == 4) dt = dt + 30;
        if (i == 5) dt = dt + 31;
        if (i == 6) dt = dt + 30;
        if (i == 7) dt = dt + 31;
        if (i == 8) dt = dt + 31;
        if (i == 9) dt = dt + 30;
        if (i == 10) dt = dt + 31;
        if (i == 11) dt = dt + 30;
        if (i == 12) dt = dt + 31;
    }
    cout << "Это " << dt + a << "-ый день в году" << endl;
    system("PAUSE");
}
