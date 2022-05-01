#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string s;
    cin>>s;
    int lower=0,upper =0;
    for(int i=0;i<s.length();i++)
    {
       if(s[i]>=65 && s[i]<=90)
        upper++;
       else lower++;
    }
   // cout<<"Upper: "<<upper <<" Lower: "<<lower<<endl;
    if(lower<upper)
    transform(s.begin(),s.end(),s.begin(),::toupper);
    else
 
    transform(s.begin(),s.end(),s.begin(),::tolower);
 
    cout<<s;
   // cout<<"deepakv erma";
}