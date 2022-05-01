#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0,sum1=0,flag=0;
    for(int i=1;i<=w;i++)
    {
        if(sum<=n)
        {
            sum+=k*i;
            if(sum>n)
            {
                sum1+=sum-n;
                // cout<<"sum:"<<sum<<endl;
            }
        }
        else sum1+=k*i;
        // cout<<"sum1:"<<sum1;
    }
    cout<<sum1;
}