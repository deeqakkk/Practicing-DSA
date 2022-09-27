class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        map<int, int>m;
        for(int i=0;i<nums1.size();i++)
            m[nums1[i]]++;
        
        for(int i=0;i<nums2.size();i++){
            auto it=m.find(nums2[i]);
            if(it!=m.end() && it->second>0){
                vec.push_back(nums2[i]);
                it->second--;
            }
        }
        sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
        return vec;
    }
};