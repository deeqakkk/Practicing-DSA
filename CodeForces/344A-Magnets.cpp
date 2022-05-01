#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int a[n];
   for(int i=0;i<n;i++)
   {  if(i==0)
       {
           cin>>a[i];
       }
       else {
           cin>>a[i];
           if(a[i-1]!=a[i])
           count++;
       }
   }

   cout<<count+1;
}