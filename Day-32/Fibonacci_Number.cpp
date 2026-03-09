class Solution {
public:
    int fibcal(int n,vector<int>&v) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(v[n] != -1) return v[n];
        return v[n] = fib(n-1) + fib(n-2);
    }
    int fib(int n){
        vector<int>v(n+1,-1);
        return fibcal(n,v);
    }
};
