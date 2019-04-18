class Solution {
public:
    string longestPalindrome(string s) {
        int startIdx = 0, left = 0, right = 0, len = 0;
        for(int i=0;i<s.size();++i){
            left = right = i;
            fingPalindrome(s, left, right, startIdx, len);
            
            if(s[i]==s[i+1]){
                left=i;
                right=i+1;
                fingPalindrome(s,left,right,startIdx,len);
            }
        }
        return s.substr(startIdx, len);
    }
    void fingPalindrome(string s,int l,int r,int &startIdx,int &len){
        while(l>=0&&r<s.size()&&s[l]==s[r]){
            --l;
            ++r;
        }
        int temp = r-l-1;
        if(temp>len){
            len=temp;
            startIdx=l+1;
        }
    }
};
