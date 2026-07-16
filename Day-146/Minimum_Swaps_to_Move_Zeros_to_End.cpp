class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int zeroes = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                zeroes++;
            }
        }

        for(int j = n-zeroes; j<n; j++){
            if(nums[j] != 0){
                cnt++;
            }
        }
        return cnt;
    }
};
