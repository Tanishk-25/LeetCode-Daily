class Solution {
public:
    int countAsterisks(string s) {
        int cnt = 0;
        bool Inpipe = false;
        for(int i = 0; i<s.size(); i++){
            if(!Inpipe && s[i] == '*'){
                cnt++;
            }
            if(s[i] == '|'){
                Inpipe = !Inpipe;
            }
        }
        return cnt;
    }
};
