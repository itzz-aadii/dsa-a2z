#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter array elements: ";
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    arr[3] = 5;
    cout << arr[3];

    return 0;
}
