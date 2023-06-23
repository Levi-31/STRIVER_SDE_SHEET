#include <bits/stdc++.h>

using namespace std ;


int subarraysXor(vector<int> &arr, int k)
{
   int pre_xor=0;
   unordered_map<int,int>m;
   m[pre_xor]=1;

    int ans=0;
   for(int i=0;i<arr.size();i++){
       pre_xor^=arr[i];

       int req = pre_xor ^ k;
       ans+=m[req];
       m[pre_xor]++;

   }

   return ans;
}