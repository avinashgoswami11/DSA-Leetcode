class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        int l = 0;
        int r = cols - 1;

        while(l<=r){
            int maxRow = 0;
            int mid = l + (r-l)/2;
            for(int i=1; i<rows; i++){
                if(mat[i][mid]>mat[maxRow][mid]) maxRow = i;
            }

            int left = (mid == 0) ? -1 : mat[maxRow][mid-1];
            int right = (mid == cols-1) ? -1 : mat[maxRow][mid+1];
            if(mat[maxRow][mid]>left && mat[maxRow][mid]>right) return {maxRow,mid};
            else if(mat[maxRow][mid]<right) l = mid+1;
            else r = mid-1;
        }
        return {-1,1};
    }
};