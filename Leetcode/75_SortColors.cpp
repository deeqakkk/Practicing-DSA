// brute force approach

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int arr[3]={0};
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
            
        int i=0;
        while(arr[0]--)
            nums[i++]=0;
        
        while(arr[1]--)
            nums[i++]=1;
        
        while(arr[2]--)
            nums[i++]=2;
    }
};

//DUTCH     NATIONAL FLAG ALGORITHM