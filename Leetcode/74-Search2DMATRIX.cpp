class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mc=matrix[0].size();
        int nr=matrix.size();
        // cout<<mc<<nr;
        for(int i=0;i<nr;i++)
        {
            for(int j=0;j<mc;j++)

                if(matrix[i][j]==target)
                    return true;
        }
        return false;
    }
};

// binary search approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo=0;
     int row=matrix.size();
        int col=matrix[0].size();
        
        if(!row)
            return false;
        
        int hi=(row*col)-1;
        while(lo<=hi)
        {
            int mid=(lo+(hi-lo)/2);
            if(matrix[mid/col][mid%col]==target){
return true;
            }
            if(matrix[mid/col][mid%col]<target){
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return false;
    }
};