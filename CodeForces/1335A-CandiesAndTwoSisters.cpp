#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n;
        int ways=0;
        cin>>n;
        if(n%2==0)
        cout<<(n/2)-1<<endl;
        else cout<<n/2<<endl;

    }
}

// TLE

// #include <iostream>
// using namespace std;
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         long long int n, a, b;
//         cin >> n;
//         a = n;
//         b = 1;
//         int ways = 0;

//         while (a > b)
//         {
//             ways++;
//             a--;
//             b++;
//         }
//         if (n %2==0)
//             cout << ways-1<<endl;
//         else
//             cout << ways<<endl;
//     }
// }