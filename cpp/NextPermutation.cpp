class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j,len = nums.size();
        int temp = nums[len];
        for(i=len-2;i>=0;--i){
            if(nums[i]<nums[i+1]){
                for(j=len-1;j>i;--j){
                    if(nums[i]<nums[j]) break;
                }
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
            return;
            }
        }
    reverse(nums.begin(),nums.end());
    }
};
