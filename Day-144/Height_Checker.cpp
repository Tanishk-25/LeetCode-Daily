class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> res = heights;
        sort(res.begin(), res.end());
        int cnt = 0;
        for(int i = 0; i<heights.size(); i++){
            if(heights[i] != res[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
