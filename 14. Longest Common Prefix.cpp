class Solution {
public:
string longestCommonPrefix(vector<string>& letter) {
    if (letter.empty()) {return "";}
    string prefix= letter[0];
    for (int i=1;i<letter.size();i++) {
        while (letter[i].find(prefix)!= 0) {
            prefix= prefix.substr(0, prefix.size()-1);
            if (prefix.empty()) {return "";}
        }
    }
    return prefix;
}
};
