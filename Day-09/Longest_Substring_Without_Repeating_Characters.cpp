class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l,r = 0;
        int maxlen = 0;
        vector<int>hash(256,-1);

        while(r<n){
            if(hash[s[r]] != -1 && hash[s[r]] >= l){
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r;
            int len = r-l+1;
            maxlen = max(len,maxlen);
            r++;
        }
        return maxlen;
    }
};
