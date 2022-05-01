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

    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        if (i == 0 && a[i] > a[i + 1])
        {
            num = temp;
            cout << "Day: " << i + 1 << endl;
        }
        else
        {
            if (a[i] > num && a[i + 1] < a[i])
            {
                num = max(a[i], num);
                cout << "Day: " << i + 1 << endl;
            }
        }
    }
}