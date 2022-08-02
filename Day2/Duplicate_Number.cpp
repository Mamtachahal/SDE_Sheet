qu link = https://leetcode.com/problems/find-the-duplicate-number/

sol 1
  
  class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        for(auto it:m)
        {
            if(it.second>1)return it.first;
        }
        return -1;
    }
};


sol 2
  
  class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])return nums[i];
        }
        return -1;
    }
};




sol 3
  
  
  class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n=nums.size();
      int slow=nums[0];
    int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
  
