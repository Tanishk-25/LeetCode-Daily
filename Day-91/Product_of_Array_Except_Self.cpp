class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);
        int Lprod = 1, Rprod = 1;
        for(int i = n-1; i>=0; i--){
            res[i] = Rprod;
            Rprod *= nums[i];
        }
        for(int i = 0; i<n; i++){
            res[i] = res[i] * Lprod;
            Lprod *= nums[i];
        }
        return res;
    }
};
