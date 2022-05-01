#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while(a%b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }

    return b;
}

int main()
{
    
    cout<<GCD(98,56);

}