#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        int j = 1;
        int star = 2 * i - 1;
        for (; j <= n - i; j++)
            cout << "  ";

        while (star--)
        {
            cout << "* ";
            j++;
        }        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {

        int j = 1;
        int star = 2 * i - 1;
        for (; j <= n - i; j++)
            cout << "  ";

        while (star--)
        {
            cout << "* ";
            j++;
        }
     
        cout << endl;
    }
}