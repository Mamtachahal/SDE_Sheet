#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v{3,1,2,6,4,6,7,5,8};
    sort(v.begin(),v.end());
   int n=v.size()+1;
    vector<int>ans(n,0);
    vector<int>result;
    for(int i=0;i<n;i++)
    ans[v[i]]++;
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==0 || ans[i]>1)
        {
            result.push_back(i);
        }
    }
for(int i=0;i<result.size();i++)
cout<<result[i]<<" ";
    return 0;
}
