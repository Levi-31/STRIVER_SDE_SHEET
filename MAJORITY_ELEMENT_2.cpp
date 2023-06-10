#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &nums)
{
    int count1=0,count2=0;
    int ele1,ele2;
    for(int i=0;i<nums.size();i++){
        if(count1==0 && ele2!=nums[i]){
            count1=1;
            ele1=nums[i];
        }
        else if(count2==0 && ele1!=nums[i]){
            count2=1;
            ele2=nums[i];
        }
        else if(nums[i]==ele1)count1++;
        else if(nums[i]==ele2)count2++;
        else{
            count1--;
            count2--;
        }
    }
     count1=0;
     count2=0;
     for(int i=0;i<nums.size();i++){
         if(nums[i]==ele1)count1++;
         if(nums[i]==ele2)count2++;
     }
    int condition = (nums.size()/3)+1;
   vector<int> ans;
   if(count1>=condition)ans.push_back(ele1);
   if(count2>=condition) ans.push_back(ele2);

   sort(ans.begin(),ans.end());
   return ans;

    // return {-1,-1};


}