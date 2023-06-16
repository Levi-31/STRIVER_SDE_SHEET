#include <bits/stdc++.h> 
using namespace std;
void solve(int index ,  string s, unordered_map<string,bool>&m , vector<string>&ans ,string temp){
    if(index>=s.size()){
        temp.pop_back();
            ans.push_back(temp);
            return;
    }
    string curr="";
    for(int i=index;i<s.size();i++){
        curr+=s[i];
        if(m[curr]){
            int sz=curr.size();
            temp+=curr;
            temp.push_back(' ');
            solve(i+1,s,m,ans,temp);
            temp.pop_back();
            while(sz--)temp.pop_back();
        }
    }

  }
vector<string> wordBreak(string &s, vector<string> &wordDict)
{
     unordered_map<string,bool>m;
        for(auto &x:wordDict){
            m[x]=true;
        }
        vector<string> ans;

    solve(0,s,m,ans,"");

    return ans;

}