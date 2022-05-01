#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    // cin>>s;
    getline(cin,s);
    // cout<<s;
    int count=0;
    int a[122]={0};
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {    int k=s[i];
        //    cout<<"K:"<<k;
            if(a[k]==1)
            {
                continue;
            }
            else {
                count++;
                a[k]=1;
            }

        }
        
    }
    cout<<count;
}