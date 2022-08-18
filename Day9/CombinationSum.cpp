https://leetcode.com/problems/combination-sum/
class Solution {
public:
    void solve(int i,vector<vector<int>>&ans,vector<int>&v,vector<int>&nums,int t)
    {
        if(i==nums.size())
        {
            if(t==0)
            {
                ans.push_back(v);
               
            }
             return;
        }
        if(nums[i]<=t)
        {
        
            v.push_back(nums[i]);
            solve(i,ans,v,nums,t-nums[i]);
            v.pop_back();
            
        }
        solve(i+1,ans,v,nums,t);
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(0,ans,v,c,t);
        return ans;
    }
};
