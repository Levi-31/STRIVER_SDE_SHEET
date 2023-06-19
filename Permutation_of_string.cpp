#include <bits/stdc++.h> 
using namespace std;
void solve(int index , string&s , vector<string>&ans,vector<bool>&vis,string &temp){
    if(temp.size()==s.size()){
        ans.push_back(temp);
        return ;
    }

    for(int i=0;i<s.size();i++){
       if(vis[i])continue;
       temp.push_back(s[i]);
       vis[i]=true;
        solve(i+1,s,ans,vis,temp);
        vis[i]=false;
        temp.pop_back();
    }

}
vector<string> findPermutations(string &s) {
    vector<string> ans;
    vector<bool>vis(s.size(),false);
    string temp="";
    solve(0,s,ans,vis,temp);
     return ans;
}