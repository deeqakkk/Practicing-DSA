class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> oG=obstacleGrid;
             int m = oG.size(), n = oG[0].size();
        vector<int> prevRow(n, 0), curRow(n, 0);
        curRow[0] = !oG[0][0];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i == 0 and j == 0) continue;
                int up = 0, left = 0;
                if(oG[i][j] != 1){
                    if(i-1 >=0) up = prevRow[j];
                    if(j-1 >=0) left = curRow[j-1];
                }
                curRow[j] = up + left;
            }
            prevRow = curRow;
        }
        return curRow[n-1];
    }
};