#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
            s1[i] += 32;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] >= 65 && s2[i] <= 90)
            s2[i] += 32;
    }

    //  cout<<"s1: "<<s1<<endl;
    //  cout<<"s2: "<<s2<<endl;
    int x = s1.compare(s2);

    //  cout<<"value of x: "<<x<<endl;

    if (x < 0)
        cout << -1;
    else if (x > 0)
        cout << 1;
    else if (x == 0)
        cout << 0;

    return 0;
}