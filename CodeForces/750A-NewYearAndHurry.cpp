#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int time = 240;
    int i = 1;
    int count = 0;
    int qtime = 0;
    while (count<n)

    {
       qtime+=5*i;
    //    cout<<"timeleft:"<<time-qtime<<endl;
       if(time-qtime>=k )
       {
           count++;
           i++;
       }  
       else break;
    }
    cout<<count;
}