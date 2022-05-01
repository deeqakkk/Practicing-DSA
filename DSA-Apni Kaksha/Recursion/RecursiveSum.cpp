#include<bits/stdc++.h>
using namespace std;

int printSum(int n)
{   
    if(n==0)
    {
        return 0;
    }

    int preSum=printSum(n-1);
    return n+preSum;
}

int main()
{
    cout<<printSum(4);
}