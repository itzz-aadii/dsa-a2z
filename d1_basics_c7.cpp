#include <bits/stdc++.h>
using namespace std;
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}
int maxx(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 < num2)
    {
        return num2;
    }
    else
    {
        cout << "Both are equal" << endl;
        return num1;
    }
}
int main()
{
    int num1, num2;
    cout << "Enter numbers: ";
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res << endl;
    int max = maxx(num1, num2);
    cout << max << endl;
    return 0;
}
