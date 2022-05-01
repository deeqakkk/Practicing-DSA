// PAIR SUM PROBLEM

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0, right = n - 1;
    int sum = 0;
    while (right > left)
    {
        sum = a[right] + a[left];
        if (sum < s)
            left++;
        else if (sum > s)
            right--;

        if (sum == s)
        {
            cout << "YES";
            break;
        }
    }
}
