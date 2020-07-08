#include <iostream>
using namespace std;
int main()
{
    int a[100], i;
    int k = 0;
    for (i = 1; i < 100; i++) {
        cin >> a[i];
        k++;
        if (a[i] == 0)
            break;
    }
    cout << k - 1 << endl;
    system("pause");
}
