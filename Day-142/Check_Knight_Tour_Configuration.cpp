class Solution {
public:
    bool Isvalid(vector<vector<int>> &grid, int r, int c, int n, int expVal){
        if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != expVal){
            return false;
        }

        if(expVal == (n*n) - 1){
            return true;
        }

        int res1 = Isvalid(grid,r-2,c+1,n,expVal+1);
        int res2 = Isvalid(grid,r-1,c+2,n,expVal+1);
        int res3 = Isvalid(grid,r+1,c+2,n,expVal+1);
        int res4 = Isvalid(grid,r+2,c+1,n,expVal+1);
        int res5 = Isvalid(grid,r+2,c-1,n,expVal+1);
        int res6 = Isvalid(grid,r+1,c-2,n,expVal+1);
        int res7 = Isvalid(grid,r-1,c-2,n,expVal+1);
        int res8 = Isvalid(grid,r-2,c-1,n,expVal+1);

        return res1 || res2 || res3 || res4 || res5 || res6 || res7 || res8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return Isvalid(grid,0,0,grid.size(),0);
    }
};
