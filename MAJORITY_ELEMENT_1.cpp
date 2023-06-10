#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	int count=0;
	int ele;
	for(int i=0;i<n;i++){
		if(count==0){
			ele=arr[i];
			count=1;
		}
		else if(arr[i]==ele){
			count++;
		}
		else{
			count--;
		}
	}

	count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==ele)count++;
	}

	return count>n/2?ele:-1;
}