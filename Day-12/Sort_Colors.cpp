class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int s = 0, curr = 0, e = n-1;
        while(curr<=e){
            if(arr[curr] == 0){
                swap(arr[curr++], arr[s++]);
            }
            else if(arr[curr] == 1){
                curr++;
            }
            else{
                swap(arr[curr], arr[e--]);
            }
        }
    }

};
