#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += i * rem;
        i *= 2;
        n = n / 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += i * rem;
        i *= 8;
        n = n / 10;
    }
    return ans;
}

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }

        x *= 16;
    }
    return ans;
}

void decimalToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
// string decimalToHexadecimal(int n)
// {
//     int x=1;
//     string ans="";
//     while(x<=n)
//     x*=16;;
//     x/=16;
//     while(x>0)
//     {
//         int lastDigit=n/x;
//         n-=lastDigit*x;
//         x/=16;
//         if(lastDigit<=9)
//         ans=ans+ to_string(lastDigit);
//         else {
//             char c='A'+lastDigit-10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }
int main()
{
    int n;
    cin >> n;

    //cout<<octalToDecimal(n);
    // cout<< hexadecimalToDecimal(n);
    // cout<<BinaryToDecimal(n);
    // decimalToBinary(n);
    // cout<<decimalToOctal(n);
    // cout<<decimalToHexadecimal(n);

    return 0;
}

