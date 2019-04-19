class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        int max_len=1;
        string temp=s.substr(0,1);
        cout<<temp<<endl;
        for(int i=1;i<s.size();++i){
            if(temp.find(s[i])==string::npos){
                temp+=s[i];
            }
            else{
                if(max_len<temp.size())
                    max_len=temp.size();
                temp=temp.substr(temp.find(s[i])+1,temp.size())+s[i];
            }
        }
        if(max_len<temp.size())
            max_len=temp.size();
        return max_len;
    }
};
