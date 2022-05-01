#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    
    for(int i=1;i<=n;i++)
    {   int j=1;
        while(i!=a[j])
        {
           j++;
           count++;
        }
 
        cout<<count<<" ";
        count=1;
    }
 
   
}