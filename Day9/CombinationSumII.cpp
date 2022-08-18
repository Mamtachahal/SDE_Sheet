https://leetcode.com/problems/combination-sum/
class Solution {
public:  
  void help(int j,vector<int>&arr, int t,vector<int>&v,   vector<vector<int>>&ans)
  { 
          if(t==0)
          {
              ans.push_back(v);
              return ;
          }
      for(int i=j;i<arr.size();i++)
      {
          if(i>j && arr[i-1]==arr[i])continue;
          if(arr[i]>t)break;
          v.push_back(arr[i]);
          help(i+1,arr,t-arr[i],v,ans);
          v.pop_back();
      }
      
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
         vector<vector<int>>ans;
        vector<int>v;
        help(0,c,t,v,ans);
        return ans;
    }
};
