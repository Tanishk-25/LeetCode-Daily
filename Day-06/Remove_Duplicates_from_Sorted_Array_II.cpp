class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index =0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i<n-2 && nums[i]==nums[i+2]){
           
                continue;
            }
            nums[index]=nums[i];
            index++;
            }
           return index;

    }
};
