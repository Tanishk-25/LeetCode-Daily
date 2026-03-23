class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = 0;
        int max_cnt = 0;
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0; i<m; i++){
            int one_cnt = 0;
            for(int j = 0; j<n; j++){
                if(mat[i][j] == 1){
                    one_cnt++;
                }
            }
        if(one_cnt > max_cnt){
            max_cnt = one_cnt;
            index = i;
        }
        }
        return {index,max_cnt};
    }
};
