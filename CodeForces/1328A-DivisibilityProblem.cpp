#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int d=a/b;
        if(a%b==0)
        cout<<0<<endl;
        else {
            int c=a-b*d;
            cout<<abs(c-b)<<endl;
        }

      
    }
  
}
//TIME LIMIT EXCEEDED WITH THIS LOGIC
/*

  while(a-b>b||a>b)
        {
            a=a-b;
            // cout<<"B"<<b;
        }
        cout<<abs(b-a)<<endl;


int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int i=1;
        if(a%b==0)
        cout<<0<<endl;
        else 
        while(true)
        {
           int c= b*i++;
            // cout<<c<<endl;
            if(c>a)
            {
                cout<<c-a<<endl;
               
                break;
            }

        }
    }
}*/