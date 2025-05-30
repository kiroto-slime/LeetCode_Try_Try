class Solution {
public:
    int RomanNum(char Num) {
        if (Num== 'I') {return 1;}
        if (Num== 'V') {return 5;}
        if (Num== 'X') {return 10;}
        if (Num== 'L') {return 50;}
        if (Num== 'C') {return 100;}
        if (Num== 'D') {return 500;}
        if (Num== 'M') {return 1000;}
        return 0;
    }

    int romanToInt(string s) {
        int result= 0;
        for (int i= 0 ; i < s.length(); i++) {
            if (i+1<s.length() && RomanNum(s[i]) < RomanNum(s[i+1])) {
                result-= RomanNum(s[i]);
            }
            else {result+= RomanNum(s[i]);}
        }
        return result;
    }
};
