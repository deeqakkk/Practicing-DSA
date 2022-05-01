#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i <= k && a[i] > 0)
            count++;
        else if (a[i] > 0 && a[i] >= a[k])
            count++;
    }

    cout << count;
}