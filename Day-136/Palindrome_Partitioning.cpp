class Solution {
public:
    bool isPalindrome(string s1){
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
    void getPart(string s, vector<vector<string>> &res, vector<string> &partitions){
        if(s.size() == 0){
            res.push_back(partitions);
            return;
        }

        for(int i = 0; i<s.size(); i++){
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
                partitions.push_back(part);
                getPart(s.substr(i+1),res,partitions);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> partitions;

        getPart(s,res,partitions);
        return res;
    }
};
