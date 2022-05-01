// WRITE A PROGRAM TO COUNT THE NUMBER OF ONES IN 
// IN A BINARY REPRESENTATION OF A NUMBER

#include<bits/stdc++.h>
using namespace std;

int numberOfones(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;

    }

    return count;
}
int main()
{
  cout<<numberOfones(19)<<endl;

  return 0;
}