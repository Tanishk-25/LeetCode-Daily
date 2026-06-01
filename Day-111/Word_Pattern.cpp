class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string temp = "";
        for(char c : s){
            if(c == ' '){
                arr.push_back(temp);
                temp = "";
            }
            else{
                temp += c;
            }
        }
        arr.push_back(temp);
        if(pattern.size() != arr.size()){
            return false;
        }
        unordered_map<char, string> mpp;
        for(int i = 0; i<pattern.size(); i++){
            char ch = pattern[i];
            for(auto it : mpp){
                if(it.first != ch && it.second == arr[i]){
                    return false;
                }
            }
            if(mpp.count(ch) && mpp[ch] != arr[i]){
                return false;
            }
            mpp[ch] = arr[i];
        }
        return true;
    }
};
