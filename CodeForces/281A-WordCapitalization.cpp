#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] >= 97 && s[0] <= 122)
        s[0] = s[0] - 32;
    //if(s[0]>=65 && s[0]<=90)
    cout << s;

    return 0;
}