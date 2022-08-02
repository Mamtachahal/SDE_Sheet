https://leetcode.com/problems/powx-n/
class Solution {
public:
    double myPow(double x, int n) {
      long long m=n;
        double ans =1.0;
        if(m<0) m=m*-1;
        while(m!=0)
        {
            if(m%2==0)
            {
                 x=x*x;
                m=m/2;
            }
            else
            {
                ans=ans*x;
                m=m-1;
            }
        }
        if(n<0)
           ans= (double)(1.0)/(double)(ans);
        return ans;
    }
};
