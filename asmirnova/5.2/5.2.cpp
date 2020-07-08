#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int  N, k, min;
    cout << "Введите N: ";
    cin >> N;
    k = 0;
    min = 10;
    do {
        if (N % 10 == min)
            k++;
        else if (N % 10 <= min)
        {
            min = N % 10;
            k = 1;
        }
        N = N / 10;
    } while (N != 0);
    cout << k << endl;
    system("PAUSE");
}
