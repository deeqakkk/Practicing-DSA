
// Brute Force
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=0;i<m+n;i++)

        {
            for(int j=0;j<n;j++)

                if(nums1[i]>nums2[j])
                {
                    swap(nums1[i],nums2[j]);
                    break;
                }
            else swap(nums1[i],nums2[j]);
        }
        sort(nums1.begin(),nums1.end());
    }
};

// optimized solution
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=0;
        for(int i=m;i<m+n;i++)
        {
            swap(nums1[i],nums2[p++]);
        }
        sort(nums1.begin(),nums1.end());
    }
};