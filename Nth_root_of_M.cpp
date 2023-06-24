#include <bits/stdc++.h>

using namespace std ;

long long mod=1e9+7;
int NthRoot(int n, int m) {

long long  l=1,h=m;

while(l<=h){
  long long mid=l+(h-l)/2;
   long long temp=1;

   for(int i=0;i<n;i++){
     temp*=mid;
     if(temp>m)break;
   }

   if(temp > m){
     h=mid-1;
   }
   else if(temp<m){
     l=mid+1;
   }
   else
   return mid;
}

return -1;
}