#include <iostream>

int main()
{
    char s[128], res[256], * a = s, * b = res;
    std::cin.getline(s, sizeof(s));
    for (; *b = *a; ++a)
    {
        if ('*' != *b)
        {
            *++b = *a;
            ++b;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
