#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	 unordered_map<int,int>m;
	 for(auto x:arr)m[x]++;

	 for(auto x:m){
		 if(x.second>=2) return x.first;
	 }

	 return -1;
}
