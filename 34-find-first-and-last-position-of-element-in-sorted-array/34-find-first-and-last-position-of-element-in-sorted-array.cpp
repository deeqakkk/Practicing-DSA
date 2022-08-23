class Solution
{
    public:

        int firstPos(vector<int> &nums, int target)
        {
            int high = nums.size() - 1;
            int low = 0;
            int res = -1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (nums[mid] == target)
                {
                    res = mid;
                    high = mid - 1;
                }
                else if (target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            return res;
        }

    int lastPos(vector<int> &nums, int target)
    {
        int res = -1, low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                res = mid;
                low = low + 1;
            }
            else if (target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> res;
        int a = firstPos(nums, target);
        int b = lastPos(nums, target);

        res.push_back(a);
        res.push_back(b);
        return res;
    }
};