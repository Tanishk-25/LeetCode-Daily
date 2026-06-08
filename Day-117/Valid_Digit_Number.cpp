class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n ;
        while(temp >= 10){
         temp = temp/10;
        }
        if(temp == x) return false;
        temp = n;
        while(temp > 0){
            int dig = temp%10;
            if(dig == x){
                return true;
            }
            temp = temp/10;
        }
        return false;
    }
};
