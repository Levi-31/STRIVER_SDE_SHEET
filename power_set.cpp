#include <bits/stdc++.h> 
using namespace std;
 void solve(int index, vector<int>&v , vector<vector<int>>&ans, vector<int>&temp){
     if(index==v.size()){
         ans.push_back(temp);
         return;
     }

     temp.push_back(v[index]);
     solve(index+1,v,ans,temp);
     temp.pop_back();

     solve(index+1,v,ans,temp);
 }
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>>ans;
    vector<int>temp;

    solve(0,v,ans,temp);

    return ans;
}