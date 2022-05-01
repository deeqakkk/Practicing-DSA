#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[122]={0};
    int count=0;
    for(int i=0;i<s.length();i++)
    {   int k=s[i];
        if(a[k]==0)
        {
            count++;
            a[k]=1;
        }
    }
    if(count==26)
    cout<<"YES";
    else cout<<"NO";
}