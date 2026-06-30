class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0, right = 0, cnt = 0;
        int n = moves.size();
        for(int i = 0; i<n; i++){
            if(moves[i] == 'L'){
                left++;
            }
            else if(moves[i] == '_'){
                cnt++;
            }
            else if(moves[i] == 'R'){
                right++;
            }
        }
        return abs(right-left) + cnt;
    }
};
