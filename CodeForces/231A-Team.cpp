#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    int a[c][3];
    int ques = 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < c; i++)
    {
        int one = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
                one++;
        }
        if (one >= 2)
            ques++;
    }

    cout << ques;
}