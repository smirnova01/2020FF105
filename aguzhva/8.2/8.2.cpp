#include <iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], i, j, n, s;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    s = 0;
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            if (a[i][j] != a[j][i])
                s++;
    if (s == 0)
        cout << "yeah" << endl;
    else cout << "no" << endl;
    system("pause");
}
