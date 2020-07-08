#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double n;
    cout << "Введите номер дня в году n= " << endl;
    cin >> n;
    if ((n >= 1) && (n <= 31))  cout << n << " Января" << endl;
    if ((n >= 32) && (n <= 59))  cout << n - 31 << " Февраля" << endl;
    if ((n >= 60) && (n <= 90))  cout << n - 59 << " Марта" << endl;
    if ((n >= 91) && (n <= 120))  cout << n - 90 << " Апреля" << endl;
    if ((n >= 121) && (n <= 151))  cout << n - 120 << " Мая" << endl;
    if ((n >= 152) && (n <= 181))  cout << n - 151 << " Июня" << endl;
    if ((n >= 182) && (n <= 212))  cout << n - 181 << " Июля" << endl;
    if ((n >= 213) && (n <= 243))  cout << n - 212 << " Августа" << endl;
    if ((n >= 244) && (n <= 273))  cout << n - 243 << " Сентября" << endl;
    if ((n >= 274) && (n <= 304))  cout << n - 273 << " Октября" << endl;
    if ((n >= 305) && (n <= 334))  cout << n - 304 << " Ноября" << endl;
    if ((n >= 334) && (n <= 365))  cout << n - 334 << " Декабря" << endl;
    system("PAUSE");
}
