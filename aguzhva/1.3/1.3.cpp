#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    int a, b, c;
    cout << "Введите a:";
    cin >> a;
    cout << "Введите b:";
    cin >> b;
    cout << "Введите c:";
    cin >> c;
    if (a > 0 && -a == b && c > 0 || b > 0 && -b == c && a > 0 || c > 0 && -c == a && b > 0)
        cout << "TRUE" << endl;
    else if (a < 0 && b < 0 && (c == -a || c == -b) || b < 0 && c < 0 && (a == -b || a == -c) || a < 0 && c < 0 && (b == -a || b == -c))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    system("PAUSE");
}
