class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int num = 0,idx = 0;
        while(idx<nums.size()){
            if(nums[idx]!=val){
                nums[num++] = nums[idx++];
            }
            else idx+=1;
        }
    return num;
    }
};
