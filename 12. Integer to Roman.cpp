class Solution {
public:
    string intToRoman(int num) {
        static const int vals[13]= {1000,  900, 500, 400, 100,  90,  50,  40,  10,   9,   5,  4, 1};
        static const string sums[13]= {"M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string res;
        for(int i=0;i<13 && num>0;i++) {
            int cnt= num/vals[i];
            num%= vals[i];
            while(cnt--) {res+= sums[i];}
        }
        return res;
    }
};
