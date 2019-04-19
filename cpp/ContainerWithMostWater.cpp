class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int sum=0;
        while(s<e){
            int temp=min(height[s],height[e])*(e-s);
            sum=max(sum,temp);
            if(height[s]<height[e])
                ++s;
            else
                --e;
        }
        return sum;
    }
};
