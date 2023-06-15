#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int>&time, long long max_time_for_day, int max_days){
    int days=1;
    long long curr_time=0;
    for(int i=0;i<time.size();i++){
        curr_time+=time[i];
        if(curr_time>max_time_for_day){
            curr_time=time[i];
            days++;
        }

    }

    return days<=max_days;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	

  long long l=*max_element(time.begin(),time.end());
  long long h=accumulate(time.begin(),time.end(),0);
   long long ans=-1;
   while(l<=h){
       long long mid = l+(h-l)/2;

       if(isPossible(time,mid,n)){
           ans=mid;
           h=mid-1;
       }
       else{
           l=mid+1;
       }
   }

   return ans;
}