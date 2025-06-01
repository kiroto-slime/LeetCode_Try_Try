class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {return 0;}
        int before= 0;
        for (int i=1;i<nums.size();i++) {
            if (nums[before]!= nums[i]) {nums[++before]= nums[i];}
        }
        return ++before;
    }
};
