qu link==https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<m;j++)
            {
                swap(nums[i][j],nums[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(nums[i].begin(),nums[i].end());
        }
    }
};
