class Solution {
public:
    bool check(string a, string b){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> res;
        res.push_back(words[0]);
        for(int i = 1; i<n; i++){
            if(!check(words[i], res.back())){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
