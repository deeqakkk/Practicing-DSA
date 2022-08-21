class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        vector<int> inc(n,1), dec(n,1);
        int res=1;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                inc[i]=dec[i-1]+1;
            else if(arr[i]<arr[i-1])
                dec[i]=inc[i-1]+1;
            
            
            int curr=max(inc[i],dec[i]);
            
            res=max(res,curr);
        }
        return res;
    }
};