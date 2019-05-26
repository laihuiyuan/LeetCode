class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        map<char,int> R2N={{'I',1},{'V',5},{'X',10},{'L',50},
                             {'C',100},{'D',500},{'M',1000}};
        for (int i=0;i<s.size();i++) {
            if (i>0 && R2N[s[i]]>R2N[s[i-1]]) {
                  res+=(R2N[s[i]]-2*R2N[s[i-1]]);
            } 
            else {
                  res+=R2N[s[i]];
            }
        }
        return res;
    }
};
