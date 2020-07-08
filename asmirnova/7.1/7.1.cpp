#include <cmath>
#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n, i, j;
    double a[100];
    double s = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i != 1)
        {
            bool pr = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                    pr = false;
            }
            if (pr == true) s = s + a[i];
        }
    }
    cout << s << endl;
}
