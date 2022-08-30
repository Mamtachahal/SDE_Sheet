https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> result;
        for(int i=0;i<nums1.size();i++){
            result.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            result.push_back(nums2[i]);
        }
        sort(result.begin(),result.end());
        
        double ans;
        
        if(result.size() %2 != 0){
            ans=result[result.size()/2];
        }
        else{
            ans= ( result[(result.size()/2 - 1)] + result[(result.size()/2)] ) / 2;
        }
        return ans;
    }
};
