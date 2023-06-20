#include <bits/stdc++.h> 
using namespace std;
void solve(int index, int n, vector<int>&arr,  vector<int>&temp ,vector<vector<int>>&ans){
   ans.push_back(temp);

   for(int i=index;i<n;i++){
       if(i!=index && arr[i]==arr[i-1]) continue;

       temp.push_back(arr[i]);
       solve(i+1,n,arr,temp,ans);
       temp.pop_back();
   }

     
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
   vector<vector<int>>ans;
   vector<int> temp;
   sort(arr.begin(),arr.end());
   solve(0,n,arr,temp,ans);
  
  
   return ans;
}