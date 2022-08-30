https://leetcode.com/problems/palindrome-partitioning/
class Solution {
public:
    bool isPalindrome(string s,int f,int e)
    {
        while(f<=e)
        {
            if(s[f]!=s[e])return false;
            f++;
            e--;
        }
        return true;
    }
    void func(int ind,string s,vector<string>&path,vector<vector<string>>&ans)
    {
        if(ind==s.size())
        {
            ans.push_back(path);
            return ;
        }
      for (int i = ind; i < s.size(); ++i) 
        {
            if(isPalindrome(s,ind,i))
            {
                path.push_back(s.substr(ind,i-ind+1));
                func(i+1,s,path,ans);
                path.pop_back();
            }
                
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        func(0,s,path,ans);
        return ans;
    }
};