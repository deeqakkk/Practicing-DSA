#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        int row=i,j=1;
        for(  j=1;j<=n-i;j++)
        cout<<"  ";

        for(;j<=n;j++)
        {
            cout<<row--<<" ";
        }
        row=2;
        for(;j<=n+i-1;j++)
        {
            cout<<row++<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--)
    {   
        int row=i,j=1;
        for(  j=1;j<=n-i;j++)
        cout<<"  ";

        for(;j<=n;j++)
        {
            cout<<row--<<" ";
        }
        row=2;
        for(;j<=n+i-1;j++)
        {
            cout<<row++<<" ";
        }
        cout<<endl;
    }
}