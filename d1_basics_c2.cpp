#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        int age;
        cout << "Enter age: ";
        cin >> age;
        if (age < 0)
        {
            cout << "Invalid age\n";
        }
        else if (age < 18)
        {
            cout << "Not eligible\n";
        }
        else
        {
            cout << "Eligible\n";
        }
    }

    return 0;
}