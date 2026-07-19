class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i<n; i++){
            if(res.size() < k || nums[i] != res[res.size() - k]){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
