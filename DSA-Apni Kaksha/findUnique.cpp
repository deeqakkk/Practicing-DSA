// FIND THE UNIQUE NUMBER IN AN ARRAY 
// WEHRE ALL NUMBERS EXCEPT ONE, ARE PRESENT TWICE

#include<bits/stdc++.h>
using namespace std;

int Unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main()
{

 int arr[]={1,2,3,5,5,7,1,2,3};
 cout<<Unique(arr,9)<<endl;
}