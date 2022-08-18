// https://practice.geeksforgeeks.org/problems/subset-sums2234/1
class Solution
{
public:
void solve(int i, vector<int>&v ,vector<int>arr,int n ,int sum)
{
    
    if(i==n){
    v.push_back(sum);
    return ;
}
    solve(i+1,v,arr,n,sum+arr[i]); //take
    solve(i+1,v,arr,n,sum); //not take;
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>v;
        solve(0,v,arr,N,0);
        return v;
    }
};
