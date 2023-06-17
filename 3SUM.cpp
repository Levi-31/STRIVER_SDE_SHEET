#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
      set<vector<int>>s;
	sort(arr.begin(),arr.end());
	
	  for(int i=0;i<n-2;i++){
		int l=i+1,h=n-1;
		
		while(l<h){
			int sum=arr[i]+arr[l]+arr[h];
			if(sum==K){
				vector<int> temp={arr[i],arr[l],arr[h]};
				s.insert(temp);
				l++;
				h--;
			}
			else if(sum>K){
				h--;
			}
			else{
				l++;
			}
			
		}
	  }
	  vector<vector<int>>ans(s.begin(),s.end());

	  return ans;
}