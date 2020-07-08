#include <cmath>
#include <iostream>
#define PI 3.14
using namespace std;
int main(char* args[])
{
    double  a, b, h, S;
    int N;
    cin >> N;
    switch (N) {
    case 1: {
        cout << "a= " << endl;
        cin >> a;
        b = a * sqrt(2);
        cout << "b= " << b << endl;
        h = a * sqrt(2) / 2;
        cout << "h= " << h << endl;
        S = a * a / 2;
        cout << "S= " << S << endl;
    }
          break;
    case 2: {
        cout << "b= " << endl;
        cin >> b;
        a = b * sqrt(2) / 2;
        cout << "a= " << a << endl;
        h = b / 2;
        cout << "h= " << h << endl;
        S = b * b / 4;
        cout << "S= " << S << endl;
    }
          break;
    case 3: {
        cout << "h= " << endl;
        cin >> h;
        a = h * sqrt(2);
        cout << "a= " << a << endl;
        b = h * 2;
        cout << "b= " << b << endl;
        S = h * h;
        cout << "S= " << S << endl;
    }
          break;
    case 4: {
        cout << "S= " << endl;
        cin >> S;
        a = sqrt(2 * S);
        cout << "a= " << a << endl;
        b = 2 * sqrt(S);
        cout << "b= " << b << endl;
        h = sqrt(S);
        cout << "h= " << h << endl;
    }
          break;
          system("pause");
    }

}
