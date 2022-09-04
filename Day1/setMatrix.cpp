class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c=1;
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]==0)c=0;
            for(int j=1;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
            
        }
        
        
            for(int i=row-1;i>=0;i--)
            {
                for(int j=col-1;j>=1;j--)
                
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                    {
                        matrix[i][j]=0;
                    }
                    if(c==0)matrix[i][0]=0;
                }
    }
};



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 void setZeroes(vector < vector < int >> & mat) {
        int n=mat.size();
        int m=mat[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(mat[i][0]==0)c=1;
            for(int j=1;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(mat[i][0]==0 || mat[0][j]==0)
                {
                    mat[i][j]=0;
                }
            }
            if(c==1)mat[i][0]=0;
        }
 }
        int main(){
            int n=3;
            int m=3;
             vector<vector<int>> arr(n, vector<int>(m));
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>arr[i][j];
                }
            }
            setZeroes(arr);
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
