class Solution {
public:
    int arraySign(vector<int>& nums) {
      int odd=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                odd++;
            else if(nums[i]==0)
            {
                return 0;
            }
        }
        
       if(odd%2==0)
           return 1;
        else return -1;
    }
};