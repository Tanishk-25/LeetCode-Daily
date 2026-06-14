class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.length();
        int a = 0, b = 0;
        for(int i = 0; i<n; i++){
            if(moves[i] == 'L')a++;
            if(moves[i] == 'R')a--;
            if(moves[i] == 'U')b++;
            if(moves[i] == 'D')b--;
        }
        return (a == 0 && b == 0);
    }
};
