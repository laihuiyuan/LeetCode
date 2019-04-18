class Solution {
public:
    const vector<string> key{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string> letterCombinations (const string &digits) {
        vector<string> res;
        if(digits.size()==0)
            return res;
        letterDFS(digits,0,"",res);
        return res;
    }
    
    void letterDFS(const string &digits, size_t cur,string str,vector<string> &res){
        if(cur==digits.size()){
            res.push_back(str);
            return;
        }
        
        for (auto x:key[digits[cur]-'2']){
            letterDFS(digits,cur+1,str+x,res);   //递归
        }
    }
};
