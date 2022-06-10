class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        
        int aSum=accumulate(nums.begin(),nums.end(),0);
        
        return sum-aSum;
    }
};
// solution 1 above
// solution 2 can be implemented using hashin
