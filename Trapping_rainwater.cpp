#include <bits/stdc++.h> 
using namespace std;
long getTrappedWater(long *arr, int n){
    vector<long long>left,right;
    long long  maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,(long long)arr[i]);
        left.push_back(maxi);
    }
    maxi=LONG_MIN;
    for(int i=n-1; i >=0 ;i--){
        maxi=max(maxi,(long long)arr[i]);
        right.push_back(maxi);
    }
    reverse(right.begin(),right.end());

    long long total_water=0;

    for(int i=0;i<n;i++){
       total_water += min(left[i],right[i])-arr[i];

    }

    return total_water;
}