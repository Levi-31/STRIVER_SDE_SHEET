#include <bits/stdc++.h>

using namespace std ;

int singleNonDuplicate(vector<int>& nums)
{
	int l=0,h=nums.size()-1;
	  while(l<h){
		  int mid=l+(h-l)/2;

	    bool len_is_even_right = (h-mid)%2==0;

		if(nums[mid]==nums[mid+1]){
			if(len_is_even_right){
              l=mid+2;
			}
			else{
				h=mid-1;
			}
		}
		else{
			if(len_is_even_right){
				h=mid;
			}
			else
			l=mid+1;
		}
	  }
	  return nums[h];
	
}