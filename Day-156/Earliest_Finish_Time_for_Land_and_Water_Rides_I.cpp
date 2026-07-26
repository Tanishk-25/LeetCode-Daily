class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int land = INT_MAX;
        int water = INT_MAX;
        int l_w = INT_MAX;            //l_w = land_water
        int w_l = INT_MAX;

        for(int i = 0; i<n; i++){
            land = min(land, landStartTime[i] + landDuration[i]);
        }

        for(int i = 0; i<m; i++){
            water = min(water, waterStartTime[i] + waterDuration[i]);
            l_w = min(l_w, max(waterStartTime[i], land) + waterDuration[i]);
        }

        for(int i = 0; i<n; i++){
            w_l = min(w_l, max(landStartTime[i], water) + landDuration[i]);
        }

        return min(l_w, w_l);
    }
};
