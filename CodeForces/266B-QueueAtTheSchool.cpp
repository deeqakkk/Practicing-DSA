#include <iostream>
#include <string>
using namespace std;

int main()
{
    int len, i, time;
    cin >> len >> time;
    string s;
    cin >> s;
    char queue[len];
    for (i = 0; i < s.length(); i++)
    {
        queue[i] = s[i];
    }

    //int p=time+1;
    while (time--)
    { //cout<<"loop: "<<time<<endl;
        for (i = 0; i < s.length(); i++)
        {
            if ((queue[i] == 'B') && (queue[i + 1] == 'G'))
            {
                int temp = queue[i];
                queue[i] = queue[i + 1];
                queue[i + 1] = temp;
                i++;
            }
        }
        //cout<<"string in array: ";
    }

    for (i = 0; i < s.length(); i++)
    {
        cout << queue[i];
    }
}