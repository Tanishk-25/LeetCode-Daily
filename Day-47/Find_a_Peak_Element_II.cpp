class Solution {
public:
    int maxInd(vector<vector<int>>& mat, int n , int m , int col){
        int index = -1;
        int maxi = -1;
        for(int i = 0; i<n; i++){
            if(mat[i][col] > maxi){
                maxi = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l = 0;
        int h = m-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            int rowInd = maxInd(mat,n,m,mid);
            int left = mid-1 >= 0 ? mat[rowInd][mid-1] : -1;
            int right = mid+1 < m ? mat[rowInd][mid+1] : -1;
            if((mat[rowInd][mid] > left) && (mat[rowInd][mid] > right)){
                return {rowInd,mid};
            }
            else if(mat[rowInd][mid] > left){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return {-1,-1};
    }
};
