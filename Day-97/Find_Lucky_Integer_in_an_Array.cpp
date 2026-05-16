class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mpp;
        for(int i = 0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        int max = -1;
        for(auto it : mpp){
            int key = it.first;
            int freq = it.second;
            if(key == freq){
                if(key > max){
                    max = key;
                }
            }
        }
        return max;
    }
};
