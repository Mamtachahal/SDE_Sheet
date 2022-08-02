https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int v;
        for(int i=0;i<n;i++)
        {
         if(c==0)
         {
             v=nums[i];
         }
            if(v==nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return v;
    }
};


