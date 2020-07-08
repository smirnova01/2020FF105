#include <iostream> 
using namespace std;

int max2(int a[100], int n)
{ 
    int imx1, imx2;
    if (a[1] > a[2])
    {
    imx1 = a[1];
    imx2 = a[2];
    }
    else
    {
    imx1 = a[2];
    imx2 = a[1];
    }
    for (int i = 3; i <= n; i++)
        if (a[i] > imx1)
        {
            imx2 = imx1;
            imx1 = a[i];
        }
        else if (a[i] > imx2)  
            imx2 = a[i];
    cout << "max2= " << imx2 << endl;
    return n;
}
int main() {
    int n;
    int a[100], temp;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    max2(a,n);
    system("pause");
    return 0;
}