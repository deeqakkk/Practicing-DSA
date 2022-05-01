#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int min, max=0;
    if (a < b)
    {
        min = a;
        b-=a;
        if(b>1)
        max = b / 2;
    }
    else
    {
        min = b;
        a-=b;
        if(a>1)
        max = a / 2;
        
    }

    cout<<min<<" "<<max;
}