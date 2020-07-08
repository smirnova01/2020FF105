#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i, n, nmin, nmax, sum, max, min;
    cin >> n; 
    for (i = 1; i <= n; i++)
        cin >> a[i];
    nmax = 1;
    nmin = 1;
    for (i = 1; i <= n; i++)
    {
        if (a[i] < a[nmin]) nmin = i;
        if (a[i] > a[nmax]) nmax = i;
    }
    sum = 0;
    if (nmin < nmax)
    {
        for (i = nmin; i <= nmax; i++)
            sum = sum + a[i];
        cout << sum << endl;
    }
    else if(nmin > nmax)
    {
        for (i = nmax; i <= nmin; i++)
            sum = sum + a[i];
        cout << sum << endl;
    }
    system("pause");
}
