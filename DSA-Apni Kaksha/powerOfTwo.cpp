#include<bits/stdc++.h>
using namespace std;
// write a program to check if a given no is a power of 2

bool isPowerof2(int n)
{
    return (n && !(n & n-1));
    // n is for corner case when input itself is 0
}

int main()
{
  cout<<isPowerof2(34)<<endl;
}