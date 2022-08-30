https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
         int  n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            
            else if(nums[0]<=nums[mid])
            {
                if(nums[mid]<target || nums[0]>target)
                    s=mid+1;
                else
                    e=mid-1;
            }
            else
            {
                if(nums[mid]>target || nums[0]<=target)
                    e=mid-1;
                else
                    s=mid+1;
                    
            }
        }
        return -1;
    }
};
