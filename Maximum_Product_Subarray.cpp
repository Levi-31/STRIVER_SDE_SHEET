#include <bits/stdc++.h> 
using namespace std;
int maximumProduct(vector<int> &arr, int n)
{
    int pre=1,suff=1,ans=INT_MIN;
	for(int i=0;i<n;i++){
		if(pre==0)pre=1;
		if(suff==0)suff=1;

		pre=pre*arr[i];
		suff=suff*arr[n-i-1];

		ans=max({ans,pre,suff});
	}
	return ans;
}
