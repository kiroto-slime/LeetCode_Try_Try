class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        num1.insert(num1.end(), num2.begin(), num2.end());
        sort(num1.begin(), num1.end());
        
        size_t len1= num1.size(), mid= len1/2;
        if (len1%2== 1) {return num1[mid];} 
        else {return (num1[mid-1] + num1[mid]) / 2.0;}
    }
};
