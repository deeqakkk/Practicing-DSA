class Solution
{
    public:
        int subtractProductAndSum(int n)
        {
            vector<int> ans;
            while (n > 0)
            {
                int rem = n % 10;
                n = n / 10;
                ans.push_back(rem);
            }
            int sum = 0;
            int mult = 1;

            for (int i = 0; i < ans.size(); i++)
            {
                sum += ans[i];
                mult *= ans[i];
            }
            return mult - sum;
        }
};