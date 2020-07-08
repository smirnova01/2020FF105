#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    int x, y;
    cout << "Введите x:";
    cin >> x;
    cout << "Введите y:";
    cin >> y;
    if ((y * y <= 36 - x * x) && (y * y >= 16 - x * x) && (y > 2))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    system("PAUSE");
}

