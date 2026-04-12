class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        double  maxi = 0;
        for(int i = 0; i<k; i++){
            sum += nums[i];
        }
        maxi = sum;
        for(int i = k; i<n; i++){
            sum = sum + nums[i] - nums[i-k];
            if(sum > maxi){
                maxi = sum;
            }
        }
        return (double)maxi/k;
    }
};
