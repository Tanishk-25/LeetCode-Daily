class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int sum = 0;
        int ans = INT_MAX;
        while(r<n){
            sum += nums[r];
            while(sum >= target){
                ans = min(r-l+1,ans);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};
