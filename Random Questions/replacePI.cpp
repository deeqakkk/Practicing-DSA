#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="pippxxppiixipi";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='p' && s[i+1]=='i')
        s.replace(i,2,"3.14");
    }

    cout<<s;
}