#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "1-Check-out\n";
    }

    int i = 1;
    while (i <= 5)
    {
        cout << "Check-out-2\n";
        i++;
    }

    i = 1;
    do
    {
        cout << "3-Check-out\n";
        i++;
    } while (i <= 5);

    return 0;
}