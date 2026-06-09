class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        for(int i = 1; i<n-1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                a = i;
                break;
            }
        }
        long long lsum = 0, rsum = 0;
        for(int i = 0; i<=a; i++){
            lsum += nums[i];
        }
        for(int i = a; i<n; i++){
            rsum += nums[i];
        }
        if(lsum > rsum){
            return 0;
        }
        else if(rsum > lsum){
            return 1;
        }
        return -1;
    }
};
