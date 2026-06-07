class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        unordered_map<int,int> lost_map;
        for(int i = 0; i<n; i++){
            int loser = matches[i][1];
            lost_map[loser]++;
        }
        vector<int> notLost;
        vector<int> onceLost;
        for(int i = 0; i<n; i++){
            int winner = matches[i][0];
            int loser = matches[i][1];

            if(lost_map.find(winner) == lost_map.end()){
                notLost.push_back(winner);
                lost_map[winner] = 2;
            }

            if(lost_map[loser] == 1){
                onceLost.push_back(loser);
            }
        }
        sort(notLost.begin(), notLost.end());
        sort(onceLost.begin(), onceLost.end());
        return{notLost,onceLost};
    }
};
