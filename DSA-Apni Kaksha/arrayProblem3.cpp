// SMALLEST +VE MISSING NUMEBR IN AN ARRAY


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e6 + 2;
    bool index[N] = {false};
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            index[a[i]] = true;
        }
    }
    int ans = -1;
    for (int i = 0; i < 100000; i++)
    {
        if (index[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}