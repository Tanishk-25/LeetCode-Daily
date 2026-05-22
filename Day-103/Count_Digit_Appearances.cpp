class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            if(num == 0 && digit == 0){
                cnt++;
            }

            while(num > 0){
                if(num % 10 == digit){
                    cnt++;
                }
                num /= 10;
            }
        }
        return cnt;
    }
};
