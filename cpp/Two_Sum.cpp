class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> map_nums;
        for(int i=0;i<nums.size();++i){
            map_nums[nums[i]]=i;
        }
        for(int i=0;i<nums.size();++i){
            const int gap = target - nums[i];
            if (map_nums.find(gap)!= map_nums.end() && i!=map_nums[gap]) {
                  res.push_back(i);
                  res.push_back(map_nums[gap]);
                  break;
            }
        }
        return res;
    }
};
