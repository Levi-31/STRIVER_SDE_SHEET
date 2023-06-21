#include <bits/stdc++.h>

using namespace std ;

 
 void solve(int index  ,int sum, int n, int k ,vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp){
     if(index==n){
         if(k==sum){
             ans.push_back(temp);
         }
           return;
     }


     temp.push_back(arr[index]);
     sum+=arr[index];
     solve(index+1,sum,n,k,arr,ans,temp);
      temp.pop_back();
      sum-=arr[index];

      solve(index+1,sum,n,k,arr,ans,temp);
 }

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>>ans;
    vector<int> temp;

 
    solve(0,0,n,k,arr,ans,temp);
sort(ans.begin(),ans.end());
    return ans;
}