﻿#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double x1, y1, x2, y2, x3, y3, x4, y4, S;
    cout << "Введите числа координаты " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if ((x1 > 0) && (y1 > 0) && (x2 <= 0) && (y2 <= 0) && (x3 <= 0) && (y3 <= 0) && (x4 <= 0) && (y4 <= 0)) S = x1 * y1;
    if ((x1 > 0) && (y1 > 0) && (x2 > 0) && (y2 > 0) && (x3 >= 0) && (y3 <= 0) && (x4 >= 0) && (y4 <= 0)) S = y1 * (x2 - x1);
    if ((x1 > 0) && (y1 > 0) && (x2 > 0) && (y2 > 0) && (x3 > 0) && (y3 > 0) && (x4 > 0) && (y4 > 0)) S = (y1 - y4) * (x2 - x1);
    cout << "Площадь прямоугольника в 1 четверти S= " << S << endl;
    system("PAUSE");
}
