https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    void solve(int j,vector<vector<int>>&ans,vector<int>&v,vector<int>&nums)
    {
        ans.push_back(v);
        for(int i=j;i<nums.size();i++)
        {
            if(i!=j && nums[i]==nums[i-1])continue;
            v.push_back(nums[i]);
            solve(i+1,ans,v,nums);
            v.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(0,ans,v,nums);
        return ans;
    }
};
