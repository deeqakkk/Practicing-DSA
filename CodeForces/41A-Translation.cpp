#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    string t2 = s;
    reverse(t2.begin(), t2.end());

    if (t2 == t)
        cout << "YES";
    else
        cout << "NO";
}