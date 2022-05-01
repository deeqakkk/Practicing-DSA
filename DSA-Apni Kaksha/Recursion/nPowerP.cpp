#include<bits/stdc++.h>
using namespace std;

int powerR(int a, int b)
{
     if(b==0)
     return 1;
    int result=powerR(a,b-1);
    return a*result;
}

int main()
{
    cout<<powerR(5,3);
}