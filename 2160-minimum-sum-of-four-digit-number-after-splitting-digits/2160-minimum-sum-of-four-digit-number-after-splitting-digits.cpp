class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        while(num>0)
        {
            int rem=num%10;
             num=num/10;
            ans.push_back(rem);
        }
    sort(ans.begin(),ans.end());
    int first = ans[0] * 10 + ans[2];
        int second = ans[1] * 10 + ans[3];
        
        return first+second;
    }
};