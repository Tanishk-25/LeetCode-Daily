class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> res(26,0);
        for(int i = 0; i<sentence.size(); i++){
            res[sentence[i] - 'a']++;
        }
        for(int i = 0; i<26; i++){
            if(res[i] == 0){
                return false;
            }
        }
        return true;
    }
};
