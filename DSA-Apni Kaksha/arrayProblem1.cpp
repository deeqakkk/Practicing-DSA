// GIVEN AN ARRAY OF SIZE N. THE TASK IS TO FIND THE FIRST REPEATING ELEMENT IN THE ARRAY OF INTEGERS, I.E. AN ELEMENT THAT
// OCCURS MORE THAN ONCE AND WHOSE INDEX OF FIRST OCCURANCE IS SMALLEST

// 7
// INPUT: 1 5 3 4 3 5 6  OUTPUT : 2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int index[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        index[i] = -1;
    }
    int Min = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        if (index[i] == -1)
        {
            index[a[i]] = i;
        }
        else
        {
            Min = min(index[a[i]], Min);
        }
    }
    if (Min == INT_MAX)
        cout << -1 << endl;
    else
        cout << Min;
}