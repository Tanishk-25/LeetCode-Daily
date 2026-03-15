class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int cnt = 0;
        int bloomTime = 0;
        for(int i = 0; i<bloomDay.size(); i++){
            if(bloomDay[i] <= day) cnt++;
            else{
                bloomTime += (cnt/k);
                cnt = 0;
            }
        }
        bloomTime += (cnt/k);
        return bloomTime >= m;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = (long long) m * k;
        if(val > n) return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }
        int l = mini, h = maxi;
        int ans = -1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(possible(bloomDay,mid,m,k)){
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
