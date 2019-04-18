class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1) return s;
        string zigzag;
        int len=s.size();
        int step=2*numRows-2;
        for(int i=0;i<numRows;++i){
            for (int j = i; j < len; j += step) {
                zigzag.push_back(s[j]);
                if (i>0&&i<numRows-1) {
                    int t=j+step-2*i;
                    if (t<len) {
                        zigzag.push_back(s[t]);
                    }
                }
            }
        }
        return zigzag;
    }
};
