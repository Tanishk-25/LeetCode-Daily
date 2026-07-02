class Solution {
public:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &res, vector<int> d){
        if(ind == arr.size()){
            if(target == 0){
                res.push_back(d);
            }
            return;
        }

        if(arr[ind] <= target){
            d.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,res,d);
            d.pop_back();
        }
        findCombination(ind+1,target,arr,res,d);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> d;
        findCombination(0,target,candidates,res,d);
        return res;
    }
};
