class Solution {
public:
    string sortSentence(string s) {
        vector<string> res(10);
        string temp = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                int pos = temp[temp.size() - 1] - '0'; //temp.back() - '0' 
                temp.pop_back();
                res[pos] = temp;
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        res[pos] = temp;
        temp = "";

        for(int i = 1; i<10; i++){
            if(res[i] != ""){
                temp += res[i] + " ";
            }
        }
        temp.pop_back();
        return temp;
    }
};
