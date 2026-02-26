class Solution {
public:
    int sumOf(vector<int> &arr, int div){
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum = sum + ceil((double)(arr[i])/(double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
     int n = nums.size();
     int l = 1, h = *max_element(nums.begin(), nums.end());
     int ans = 0;
     while(l<=h){
        int mid = l+(h-l)/2;
        if(sumOf(nums,mid) <= threshold){
            ans = mid;
            h = mid-1;
        }
        else{
            l = mid+1;
        }
     } 
     return ans;
    }
};
