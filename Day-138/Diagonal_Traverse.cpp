class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        map<int, vector<int>> mpp;
        vector<int> res;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                mpp[i+j].push_back(mat[i][j]);
            }
        }

        bool flip = true;
        for(auto &it : mpp){
            if(flip){
                reverse(it.second.begin(), it.second.end());
            }

            for(auto &nums : it.second){
                res.push_back(nums);
            }

            flip = !flip;
        }
        return res;
    }
};
