class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0,b=0,c=0;
        for (auto num:nums){
            b |= a&num;
            a ^= num;
            c = a&b;
            a &= ~c;
            b &= ~c;
        }
    return a;
    }
};
