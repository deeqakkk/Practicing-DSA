#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    cout<<n/2;
    else cout<<-(n/2)-1;
}
//This will produce TLE
/*#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int even=0,odd=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        even+=i;
        else odd+=i;

        if(i==n)
        {
            cout<<even-odd;
        }
    }
}*/