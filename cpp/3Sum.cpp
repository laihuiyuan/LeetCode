class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int x=0-nums[i];
            int j=i+1, k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==x){
                    res.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1]) ++j;
                    while(j<k && nums[k]==nums[k-1]) --k;
                    ++j;--k;
                }
                else if(nums[j]+nums[k]<x) ++j;
                else --k;
            }
        }
        return res;
    }
};
