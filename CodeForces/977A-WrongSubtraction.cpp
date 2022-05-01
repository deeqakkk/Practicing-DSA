#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 != 0)
        {
            n--;
            // cout << ":" << n;
        }

        else
        {
            n = n / 10;
            // cout << "::" << n;
        }
    }
    cout << n;
}