#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int n = target - a;
            
            if (mpp.find(n) != mpp.end()) {
                return {mpp[n], i};
            }
            mpp[a] = i;
        }
        return {};
    }
};