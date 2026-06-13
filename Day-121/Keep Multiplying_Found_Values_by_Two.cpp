class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(int i = 0; i<mpp.size(); i++){
            if(mpp[original] > 0){
                original *= 2;
            }
        }
        return original;
    }
};
