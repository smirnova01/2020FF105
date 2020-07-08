#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int i, n;
    double a, e;
    cout << "Введите е ";
    cin >> e;
    cout << "Введите n ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a = (pow(-1, i) * i) / (pow(2, i));
        if (fabs(a) < e) cout << i << " = " << a << endl;
    }
    return 0;
}

