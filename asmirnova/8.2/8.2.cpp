#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a[100][100];
    int n, i, j, r;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = rand() % 90 + 10;
    cout << endl;
    cout << " Исходная матрица: " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
    }
    cout << endl;
    cout << " Получившаяся матрица: " << endl;
    for (i = 1; i <= n; i++)
    {
        r = a[n][i];
        a[n][i] = a[i][n];
        a[i][n] = r;
    }
    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
    }
    system("pause");
    return 0;
}
