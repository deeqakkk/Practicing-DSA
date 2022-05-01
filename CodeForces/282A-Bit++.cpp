#include <bits/stdc++.h>

using namespace std;
int main()
{

    int tut, x = 0;
    cin >> tut;

    for (int i = 1; i <= tut; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
            x++;
        else
            x--;
    }

    cout << x;
}