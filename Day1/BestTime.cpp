class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minimum = INT_MAX;
        int maximum =0;
        for(int i=0;i<n;i++)
        {
            int current=prices[i]-minimum;
            maximum=max(maximum,current);
            minimum=min(minimum,prices[i]);
        }
        return maximum;
    }
};
