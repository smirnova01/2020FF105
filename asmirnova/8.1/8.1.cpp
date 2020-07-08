#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    double a[100][100] = { 0 };
    int n, i, k, j;
    cin >> n;
    k = 0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i == j)
            {
                a[i][j] = k;
                k++;
            }
    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    system("pause");
    return 0;
}
