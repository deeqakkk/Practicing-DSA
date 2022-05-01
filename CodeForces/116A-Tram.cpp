#include<iostream>
using namespace std;
int main()
{
 
    int r,i,j,Max=0;
    cin>>r;
    int a[r],b[r];
    for(i=0; i<r; i++)
    {
        cin>>a[i]>>b[i];
    }
    int left=0;
    for(i=0; i<r; i++)
 
 
    {
        int res=left+b[i]-a[i];
        left=res;
        if(left>=Max)
            Max=left;
    }
    cout<<Max;
 
}
 