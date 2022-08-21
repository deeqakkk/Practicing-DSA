class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        int count=0;
        int n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                count++;
            else count=0;
            
            if(count>=n/2)
            {
                ans=nums[i];
                break;
            }
        }
        
        return ans;
    }
};