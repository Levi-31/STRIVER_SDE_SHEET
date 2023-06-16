#include <bits/stdc++.h>
using namespace std;

bool solve(int index ,  string &s, unordered_map<string,bool>&m,vector<int>&dp){
  if(index>=s.size()) return 1;
 
 if(dp[index]!=-1) return dp[index];

   string temp="";
  for(int i=index;i<s.size();i++){
     temp+=s[i];
     if(m[temp]){
         bool f = solve(i+1, s,m,dp);
         if(f) return dp[index]=true;
     }
  }

  return dp[index]=false;
}
    bool wordBreak( vector<string>& wordDict ,int n , string &s) {
        unordered_map<string,bool>m;
        for(auto &x:wordDict)m[x]=true;
        
        vector<int>dp(s.size()+1,-1);
        return solve(0,s,m,dp);
        
    }