class Solution {
public:
    string intToRoman(int num) {
        string res;
        const int val[] = {1000,900,500,400,100, 
                           90,50,40,10,9,5,4,1};
        const string sym[] = {"M","CM","D","CD","C","XC","L", 
                              "XL","X","IX","V","IV","I"};
        for (size_t i = 0;num > 0;++i) {
              int count=num/val[i];
              num=num%val[i];
              for (;count>0;--count) 
                  res+=sym[i];
        }
        return res;
    }
};
