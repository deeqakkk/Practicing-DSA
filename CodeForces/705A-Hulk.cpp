#include <iostream>
using namespace std;
int main()
{
    // will continue it on 30th june morning
    int n;
    cin >> n;
    string love = "I love", hate = "I hate", it = "it", that = "that";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 && n == 1)
        {
            cout << "I hate it";
            break;
        }
        else if (i % 2 != 0)
        {
            cout << hate << " ";
            if (i < n)
                cout << that << " ";
        }
        else
        {
            cout << love << " ";
            if (i < n)
                cout << that << " ";
        }

        if (i == n)
            cout << it;
    }
}