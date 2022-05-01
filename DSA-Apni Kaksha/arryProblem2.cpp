// SUBARRAY WITH GIVEN SUM
// GIVEN AN UNSORTED ARRA A OF SIZE N OF NON-NEGATIVE INTEGERS, FIND A CONTINUOUS SUBARRAY WHICH
// ADDS TO A GIVEN NUMBER S

// INPUT  N=5, S=12, A[]=1 2 3 7 5

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int left=0,right=0,curSum=a[0];

    
    while(left<n)
    {                          
        if(curSum<s)          
                               
        {                      
            right++;            
            curSum+=a[right];   
        }                       
        if(curSum>s)            
        {                       
            curSum-=a[left];   
            left++;            
        }                      
        if(curSum==s)          
        break;                 
    }
    cout<<left<<","<<right;
    return 0;
}