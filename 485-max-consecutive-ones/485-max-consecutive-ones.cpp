class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {

            int res = 0;
            int temp = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                
                if (nums[i] == 0)
                {
                    temp = 0;
                    continue;
                }

                temp += nums[i];
                if(temp>res)
                    res=temp;
            }
            return res;
        }
};