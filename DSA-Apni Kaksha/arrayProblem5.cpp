#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int curSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curSum+=arr[i];
        if(curSum<0)
        {
            curSum=0;
        }
        maxSum=max(maxSum,curSum);
    }

    return maxSum;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
   int wrapSum=0, NormalSum=kadane(a,n);
   int totalSum=0;
   for(int i=0;i<n;i++)
   {
       totalSum+=a[i];
       a[i]=-a[i];
   }

   wrapSum=totalSum+kadane(a,n);
cout<<max(wrapSum,NormalSum);
}