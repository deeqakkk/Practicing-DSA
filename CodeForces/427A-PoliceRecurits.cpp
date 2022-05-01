#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int caseLeft = 0, policeHai = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != -1 && policeHai!=0)
        {
            policeHai = a[i];
        }
        else if (policeHai==0 && a[i] == -1)
        {
            caseLeft++;
        }
        else if(policeHai!=0&& a[i]==-1)
        policeHai--;
    }
    cout<<caseLeft;
}