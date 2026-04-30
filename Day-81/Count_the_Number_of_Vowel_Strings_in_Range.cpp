class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        for(int i = left; i<=right; i++){

            char s = words[i][0];
            char e = words[i][words[i].length()-1];

            if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
                if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u'){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
