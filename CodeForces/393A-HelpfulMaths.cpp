#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int k = s.length() - 1;
    //  cout<<"value of k: "<<k<<endl;
    int a[k], p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            a[p] = (int)s[i] - 48;
            p++;
        }
        else
            continue;
    }
    sort(a, a + p);
    for (int i = 0; i < p; i++)
    {
        if (i < p - 1)
            cout << a[i] << "+";
        else
            cout << a[i];
    }
}