#include <iostream>
using namespace std;

int NNND(int n)
{
    int d;
    d = 3;
    while (d <= n && n % d != 0)
    {
        d = d + 2;;
    }
    if (n % d == 0) cout << "НННД= " << d << endl;
    else cout << "НННД = 1, больше нет." << endl;
    return n;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    NNND(n);
}
