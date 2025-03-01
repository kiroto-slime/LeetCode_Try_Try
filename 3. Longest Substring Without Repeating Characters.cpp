class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        int maxlength=0;
        unordered_map<char, int> charmap;
        int left=0;//start,right is end.
        for (int right=0;right<len;right++) {
            if(charmap.count(s[right])==0 || charmap[s[right]]<left) {
                charmap[s[right]]=right;
                maxlength=max(maxlength, right-left+1);
            }else {
                left=charmap[s[right]]+1;
                charmap[s[right]]=right;
            }
        }
        return maxlength;
    }
};
