#include <bits/stdc++.h> 
using namespace std;
int kthLargest(vector<int>& arr, int size, int K)
{
	priority_queue<int,vector<int>,greater<int>>pq;
	for(auto x:arr){
		pq.push(x);
		if(pq.size()>K)pq.pop();
	}

	return pq.top();
}