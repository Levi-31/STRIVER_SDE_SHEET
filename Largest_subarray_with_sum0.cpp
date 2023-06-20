#include <bits/stdc++.h>
using namespace std;


int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int>m;
  m[0]=-1;
  int sum=0,len=0;
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    if(m[sum-0])
    len=max(len,i-m[sum]);
    else
    m[sum]=i;
  }

  return len;

}