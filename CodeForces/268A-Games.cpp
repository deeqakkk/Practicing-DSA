#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        cin>>a[i][j];
    }

    int i=0,j=0,count=0;
    while(i<n)
    {
        while(j<n)
        {
            if(a[i][0]==a[j][1])
            {
                count++;
                j++;
            }
            else j++;
        }
        i++;
        j=0;
    }
    cout<<count;
   
}