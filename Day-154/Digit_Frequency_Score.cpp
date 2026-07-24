class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mpp;
        while(n > 0){
            mpp[n%10]++;
            n /= 10;
        }
        int sum = 0;
        for(auto it : mpp){
            sum += it.first * it.second;
        }

        return sum;
    }
};
