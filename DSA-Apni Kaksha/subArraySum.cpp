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
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = i; j < n; j++)
        {
            temp += a[j];
            cout<<temp<<endl;
        }
    }
}