class Solution {
public:
    
   int countNegatives( vector<int> &nums){
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]>=0)
                low=mid+1;
            else high=mid-1;
            
        }
        return nums.size()-high-1;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
            for(int i=0;i<grid.size();i++){
                count+=countNegatives(grid[i]);
            }
        return count;
    }
};