#include <bits/stdc++.h>
using namespace std;

void solve(int index, int target , int n, vector<int>&arr , vector<int>&temp , vector<vector<int>>&ans){
	if(target==0){
		ans.push_back(temp);
		return;
	}

	 for(int i=index ; i<arr.size();i++){
		 if(i>index && arr[i-1]== arr[i])continue;
		 if(arr[i]>target) break;

		 temp.push_back(arr[i]);
		 solve(i+1,target-arr[i] , n , arr, temp, ans);
		 temp.pop_back();
	 }
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	vector<int> temp;

	solve(0,target,n,arr,temp,ans);

	return ans;

}
