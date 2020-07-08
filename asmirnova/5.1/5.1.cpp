#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int  N, M;
    cout << "Введите N: ";
    cin >> N;
    if ((N > 99) && (N < 1000))
        M = N / 100 + ((N / 10) % 10) * 10 + (N % 10) * 100;
    else M = N;
    cout << "Ваше М= " << M << endl;
    system("PAUSE");
}
