#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row + 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern3(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << "\n";
    }
}
void pattern5(int n)
{
    for (int row = n; row >= 0; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* " << " ";
        }
        cout << "\n";
    }
}
void pattern6(int n)
{
    for (int row = n; row >= 0; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << "\n";
    }
}
void pattern7(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row - 1; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    int test = 2;
    for (int i = 0; i < test; i++)
    {
        int num;
        cout << "Enter rows: ";
        cin >> num;
        pattern7(num);
    }
}