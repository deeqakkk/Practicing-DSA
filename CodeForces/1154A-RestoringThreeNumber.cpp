#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4], q[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    sort(arr, arr + 4);
    int a, b, c;
    c = arr[3] - arr[0];
    a = arr[3] - arr[1];
    b = arr[3] - arr[2];
    
        cout << a << " " << b << " " << c;
  
}