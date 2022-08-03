
https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
     
         for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               int t= target-(nums[i]+nums[j]) ;
               int  k=j+1;
               int  l=n-1;
                while(k<l)
                {
                    int sum=nums[k]+nums[l];
                    if(t==sum)
                    {
                       ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        while(k<l && nums[k]==nums[k+1])k++;
                        while(l>k && nums[l]==nums[l-1])l--;
                        k++;
                        l--;
                    }
                    else if(sum>t)
                        l--;
                    else
                        k++;
                }
                 while(j+1<n&&nums[j]==nums[j+1])j++;
               
            }
              while(i+1<n&&nums[i]==nums[i+1])i++;
        }
        return ans;
       
    }
};
