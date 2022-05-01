#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial=1;

    if(n==1 || n==0)
    return 1;
    else 
    for(int i=2;i<=n;i++)
    {
           factorial*=i;
    }
  return factorial;
}

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<i+1;j++)
       {
           int ans=fact(i)/(fact(i-j)*fact(j));
           cout<<ans<<" ";
       }
       cout<<endl;
   }
}