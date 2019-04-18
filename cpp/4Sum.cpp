class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        int len=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i<len-3; ++i) {
            if (i && nums[i] == nums[i - 1])
                continue;
            if(0<target&&target<nums[i]) break;
            for (int j=i+1; j<nums.size()-2; ++j) {
                if (j!=i+1&&nums[j]==nums[j-1]) {
                    continue;
                }
                int ans = target-nums[i]-nums[j];
                int l=j+1, r=len-1;
                while (l < r) {
                    if (nums[l]+nums[r] == ans) {
                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        ++l, --r;
                        while (l<r&&nums[l]==nums[l-1]) {
                            ++l;
                        }
                        while (l<r&& nums[r]==nums[r+1]) {
                            --r;
                        }
                    } 
                    else if (nums[l]+nums[r]>ans)
                        --r;
                    else
                        ++l;
                }
            }
        }
    return res;
    }
};
