#include <iostream> 
using namespace std;

int main()
{
    int n, i;
    int a[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if ((a[i] / 1000) + (a[i] / 100 % 10) == (a[i] / 10 % 10) + (a[i] % 10))
            cout << a[i] << endl;
    system("pause");
}
