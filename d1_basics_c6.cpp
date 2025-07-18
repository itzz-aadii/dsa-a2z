#include <bits/stdc++.h>
using namespace std;
void prname1()
{
    cout << "Aditya\n";
}

void prname2(string name)
{
    cout << "Hey " << name << endl;
}
int main()
{
    string name;
    prname1();
    cin >> name;
    prname2(name);
    return 0;
}