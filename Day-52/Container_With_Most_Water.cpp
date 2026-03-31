class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxWater = 0;
        while(l<r){
            int wt = r-l;
            int ht = min(height[l] , height[r]);
            int area = wt * ht;
            maxWater = max(maxWater,area);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxWater;
    }
};
