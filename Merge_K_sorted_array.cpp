#include <bits/stdc++.h> 
using namespace std;

vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    int m=arr1.size(),n=arr2.size();

	vector<int> ans;
	int i=0,j=0;
	while(i<m && j<n){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			ans.push_back(arr2[j]);
			i++;
			j++;
		}
		 else if(arr1[i]>arr2[j]){
			ans.push_back(arr2[j]);
			j++;
		}
	    else {
			ans.push_back(arr1[i]);
			i++;
		}
	}
	
	while(i<m){
		ans.push_back(arr1[i]);
		i++;
	}
	while(j<n){
		ans.push_back(arr2[j]);
		j++;
	}


//  for(int i=0;i<ans.size();i++){
// 	 arr1[i]=ans[i];
//  }

 return ans;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&arrays, int k)
{
   
    if(k==1) return arrays[0];
    if(k==2) return merge(arrays[0],arrays[1]);


    
    vector<int>ans = merge(arrays[0],arrays[1]);

    for(int i=2;i<k;i++){
       ans= merge(ans,arrays[i]);
    }

    return ans;
}
