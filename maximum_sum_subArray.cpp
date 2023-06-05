#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int nums[], int n)
{
    long long ans=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        ans=max(ans,sum);
        if(sum<0)sum=0;
    }

    return ans<0?0:ans;
}