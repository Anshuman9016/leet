class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        auto ub = upper_bound(nums.begin(), nums.end(), target);
        int lb_idx = lb - nums.begin();
        int ub_idx = ub - nums.begin();
        if (lb_idx == n || nums[lb_idx] != target) {
            return {-1, -1};
        }
        return {lb_idx, ub_idx - 1};
    }
};