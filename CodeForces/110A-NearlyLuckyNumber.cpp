#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int four = 0, seven = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
            four++;
        else if (s[i] == '7')
            seven++;
    }

    if (four + seven == 4 || four + seven == 7)
        cout << "YES";
    else
        cout << "NO";
}