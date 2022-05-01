#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    if(n==0)
    {
        return 1;
    }
    int result=factorial(n-1);
    return result*n;
}

int main()
{
    cout<<factorial(5);
}