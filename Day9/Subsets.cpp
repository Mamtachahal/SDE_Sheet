https://leetcode.com/problems/subsets/
class Solution {
public:
    void solve(int i,vector<vector<int>>&v,vector<int>nums,vector<int>ans)
    { 
        if(i==nums.size())
    {
        v.push_back(ans);
            return ;
    }
        solve(i+1,v,nums,ans);
        ans.push_back(nums[i]);
        solve(i+1,v,nums,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ans;
        solve(0,v,nums,ans);
        return v;
    }
};
