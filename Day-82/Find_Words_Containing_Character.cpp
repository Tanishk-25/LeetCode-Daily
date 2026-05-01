class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        int n = words.size();
        for(int i = 0; i<n; i++){
            bool find = false;
            for(char c : words[i]){
                if(c == x){
                    find = true;
                    break;
                }
            }
            if(find){
                res.push_back(i);
            }
        }
        return res;
    }
};
