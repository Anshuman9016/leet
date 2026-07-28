class Solution {
  public:
    int countFreq(vector<int>& arr, int x) {
        int n = arr.size();
        
        auto lb = lower_bound(arr.begin(), arr.end(), x);
        auto ub = upper_bound(arr.begin(), arr.end(), x);
        
        int lb_idx = lb - arr.begin();
        int ub_idx = ub - arr.begin();
        if (lb_idx == n || arr[lb_idx] != x) {
            return 0;
        }
        return ub_idx - lb_idx;
    }
};