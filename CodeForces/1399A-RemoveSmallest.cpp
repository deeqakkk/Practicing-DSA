#include <bits/stdc++.h>
using namespace std;
int main()
{

  int test;
  cin >> test;
  while (test--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int flag = 1;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
      if (abs(a[i] - a[i + 1]) <= 1)
        continue;
      else
      {
        flag = 0;
        break;
      }
    }

    if (flag == 0)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
}