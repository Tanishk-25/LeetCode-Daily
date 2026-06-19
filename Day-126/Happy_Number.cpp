class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> mpp;
        while(n != 1){
            if(mpp[n] == true) {
                return false;
            }
            mpp[n] = true;
            int sum = 0;
            while(n > 0){
                int rem = n%10;
                sum += rem * rem;
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};
