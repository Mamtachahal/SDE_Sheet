class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>r(numRows);
        for(int i=0;i<numRows;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
            {
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
        
    }
};



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void se(int n) {
      vector<vector<int>>r(n);
      for(int i=0;i<n;i++)
        { 
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
                r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
        
          for(int i=0;i<r.size();i++)
            {
                for(int j=0;j<r[i].size();j++)
                {
                    cout<<r[i][j]<<" ";
                }
                cout<<endl;
            }
    }
 
        int main(){
            int n=5;
            se(n);
            
        }
