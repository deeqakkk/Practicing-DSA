// MAXIMUM SUBARRAY SUM

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
     

     int curSum=0,maxSum=0;
    for(int i=0;i<n;i++)
    {
         curSum+=a[i];
         if(curSum>maxSum)
         maxSum=curSum;

         if(curSum<0)
         curSum=0;
    }

    cout<<maxSum;

}