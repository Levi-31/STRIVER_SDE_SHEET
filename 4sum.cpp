#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> nums, int target, int n) {
    
        
      
         sort(nums.begin(),nums.end());
        
        if(target<=0 && nums[0]>0)
        return "No";
        
          
       
         for(int i=0;i<n;i++){
             long long   newtarget= target-nums[i];
              for(int j= i+1; j<n;j++){
             long long  newwtarget =newtarget- nums[j];
                int k=j+1, l=n-1;

                while(k<l){
                    if(nums[k]+nums[l] == newwtarget){
                     return "Yes";
                    }
                    else if(nums[k]+nums[l] > newwtarget)
                     l--;
                     else
                     k++;
                }

              }
         }

        
         return "No";
}
