class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = numeric_limits<int>::max();
        int frag = numeric_limits<int>::max();
        for(int i = 0; i<nums.size(); ++i){
            if(i>0 && nums[i]>target) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1, k = nums.size()-1;
            while(j<k){
                const auto sum = nums[i]+nums[j]+nums[k];
                if(sum>target)
                    --k;
                else if(sum<target)
                    ++j;
                else
                    return sum;
                if(abs(sum-target)<frag){
                    frag = abs(sum-target);
                    ans = sum;
                }
            }   
        }
    return ans;
    }
};
