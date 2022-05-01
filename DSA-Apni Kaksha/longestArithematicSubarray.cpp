#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  int diff=a[1]-a[0];
  int len=2;
  int ans=2;
    for(int i=2;i<n-1;i++)
    {
      if(diff==a[i+1]-a[i])
      len++;
      else{
          diff=a[i+1]-a[i];
          len=2;
      }
      ans=max(ans,len);
    }
    cout<<ans;
    return 0;
}