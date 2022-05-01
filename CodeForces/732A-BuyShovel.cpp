#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cost, change;
    cin >> cost >> change;
    int lastNum = cost % 10;
    // cout << lastNum << endl;

    if (lastNum == change || lastNum==0)
        cout << 1;
    else
    {
        int i = 1;
        int temp = cost;
        while (lastNum != change || lastNum != 0)
        {

            cost += temp;
            i++;
            // cout << "cost" << cost << endl;
            lastNum = cost % 10;
            // cout << "lastnum:" << lastNum << " "
                //  << "I: " << i << endl;

            if (lastNum == 0 || lastNum == change)
            {
                cout << i << endl;
                break;
            }
        }
    }
}