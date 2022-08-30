https://leetcode.com/problems/single-element-in-a-sorted-array/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=x^nums[i];
        }
        return x;
    }
};



