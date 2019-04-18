class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n>0)
            generate(n,0,0,"",res);
        return res;
    }
    //l表示'('出现的次数,r 表示')'出现的次数
    void generate(int n,int l,int r,string s,vector<string> &res){
        if(l==n){
            res.push_back(s.append(n-r,')'));
            return;
        }
        generate(n,l+1,r,s+'(',res);
        if(l>r){
            generate(n,l,r+1,s+')',res);
        }
    }
};
