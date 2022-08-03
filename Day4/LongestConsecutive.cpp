https://leetcode.com/problems/longest-consecutive-sequence/
//sol 1
  
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
   int n =nums.size();
   sort(nums.begin(),nums.end());
        if(n==0)return 0;
        int ans=1;
        int result=1; 
        for(int i=1;i<n;i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                ans++;
                
            }
            else if(nums[i]==nums[i-1])
                continue;
            else
            {
                ans=1;
            }

            result=max(ans,result);
        }
        return result;
    
    }
};


sol 2
  
  
  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n =nums.size();
     set<int>s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
    for(auto it:nums)
    {
        if(!(s.count(it-1)))
        {
            int currentNumber=it;
            int streak=1;
            while(s.count(currentNumber+1))
            {
                currentNumber=currentNumber+1;
                streak+=1;
            }
            ans=max(ans,streak);
        }
           
    }
           return ans;
    }
};

