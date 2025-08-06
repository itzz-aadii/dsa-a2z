#include <bits/stdc++.h>
using namespace std;

void explainpair()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << "\n";

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << "\n";

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << "\n";
}

int main()
{
    explainpair();
    return 0;
}