#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, rooms, count = 0;
    while (n--)
    {
        cin >> a >> b;
        if (b - a >= 2)
            count++;
    }
    cout << count;
}