class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n != m) return false;
        unordered_map<char,int> mpp;
        for(int i = 0; i<n; i++){
            mpp[s[i]]++;
        }
        for(int i = 0; i<m; i++){
            mpp[t[i]]--;
        }
        for(int i = 0; i<mpp.size(); i++){
            if(mpp[i] != 0){
                return false;
            }
        }
        return true;
    }
};
