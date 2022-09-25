class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size(),si=0,li=0;
        
        if(n==1)
            return 1;
        
        for(int i=1;i<n;i++){
            if(nums[i]<nums[si])
                si=i;
            else if(nums[i]>nums[li])
                li=i;
        }
        
        int a=min(li,si);
        int b=max(li,si);
         return min({b+1,n-a,n+1+a-b});
    }
};