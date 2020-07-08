#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    char string[1000];
    cin.getline(string, 1000);
    int n = strlen(string);
    for (int i = 0; i < n / 2; i++)
    {
        if (string[i] == ':')
        {
            string[i] = '.';
        }
    }
    for (int i = n / 2; i < n + 1; i++)
    {
        if (string[i] == '!')
        {
            string[i] = '.';
        }
    }
    for (int i = 0; i < n; i++)
        cout << string[i];
    cout << endl;
    return 0;
}
