class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int i = n-1;
        for(; i>=0; i--){
            if((num[i] - '0') % 2 == 1) break;
        }
        string ans;
        for(int j = 0; j<=i; j++){
            ans += num[j];
        }
        return ans;
    }
};
