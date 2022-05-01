#include<iostream>
using namespace std;
int main()
{
    string t="Tetrahedron",c="Cube",o="Octahedron",d="Dodecahedron",i="Icosahedron";
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s==t)
        sum+=4;
        else if(s==c)
        sum+=6;
        else if(s==o)
        sum+=8;
        else if(s==d)
        sum+=12;
        else if(s==i)
        sum+=20;
    }
    cout<<sum;
}