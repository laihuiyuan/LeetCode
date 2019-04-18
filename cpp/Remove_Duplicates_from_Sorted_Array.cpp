class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int idx=0,num = 0;
        while(idx<nums.size()){
            if(nums[num]==nums[idx])
                idx+=1;
            else{
                num+=1;
                nums[num]=nums[idx];   
                idx+=1;
            }
        }
    return num+1;
    }
};
