#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int k, n;
    double    с;
    cout << "Введите к ";
    cin >> k;
    cout << "Введите n(max)>0 ";
    cin >> n;
    с = sqrt(k * n);
    while (n > 0)
    {
        n = n - 1;
        с = sqrt(с + k * n);
    }
    cout << "ответ " << с << endl;
    return 0;
}
