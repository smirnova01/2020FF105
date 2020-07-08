#include <iostream>
using namespace std;

int fun(int n, int k)
{
    std::cout << "0.";
    for (int i = 0, remainder = 1; i < k; ++i)
    {
        remainder *= 10;
        std::cout << remainder / n;
        remainder %= n;
    }
    return n;
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    fun(n, k);
}
