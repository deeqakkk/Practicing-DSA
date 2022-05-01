#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n];
    int danik = 0, anton = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (danik > anton)
        cout << "Danik" << endl;
    else if (anton > danik)
        cout << "Anton" << endl;
    else
        cout << "Friendship" << endl;
}