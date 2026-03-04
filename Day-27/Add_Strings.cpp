class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();
        int i = n-1, j = m-1;
        int carry = 0;
        string ans = "";
        while(i>=0 || j>=0 || carry>0){
            int a = (i>=0)? num1[i] - '0':0;
            int b = (j>=0)? num2[j] - '0':0;
            int sum = a+b+carry;
            carry = sum / 10;
            sum = sum % 10;
            ans += sum + '0';
            i--;
            j--;
        }  
        reverse(ans.begin(), ans.end());
        return ans;
    }
};    
