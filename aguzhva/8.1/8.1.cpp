#include <iostream>
using namespace std;
int main()
{
    int a[100][100], i, j, n;
    int k = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (((j > i) && (j < n - i + 1)) || ((j > n - i + 1) && (j < i)))
                a[i][j] = 0;
            else a[i][j] = 1;
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
}
