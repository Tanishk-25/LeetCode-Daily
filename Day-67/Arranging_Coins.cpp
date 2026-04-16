class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        for(int i = 0; i<=n; i++){
            if((n-1) < 0) return 0;
            cnt++;
            n -= i;
        }
    return cnt-1;
    }
};
