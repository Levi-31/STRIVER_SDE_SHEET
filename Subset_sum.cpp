#include <bits/stdc++.h> 
using namespace std;
void solve(int index , int &sum, vector<int>&num, vector<int>&ans){
    if(index==num.size()){
        ans.push_back(sum);
        return;
    }

sum+=num[index];
    solve(index+1,sum,num,ans);
    sum-=num[index];

    solve(index+1,sum,num,ans); 
    
    
}
vector<int> subsetSum(vector<int> &num)
{
   vector<int>ans;
   int sum=0;
   solve(0,sum,num,ans);
 sort(ans.begin(),ans.end());
   return ans;
}