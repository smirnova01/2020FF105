#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double  R;
    int N = 0;
    int x, y;
    cout << "Введите R: ";
    cin >> R;
    int d = R;
    for (x = -d; x <= d; x++)
        for (y = -d; y <= d; y++)
            if (sqrt(x * x + y * y) <= R)
                N++;
    cout << N << endl;
    system("PAUSE");
}

