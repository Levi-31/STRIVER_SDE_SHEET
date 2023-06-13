 #include <bits/stdc++.h>
 
 using namespace std ;


 
 
 
 
 
 int findPivot(int *arr , int n ){
     int l=0,r=n-1;
     while(l<r){
         int mid= l+(r-l)/2;
         if(arr[mid] >arr[r])l=mid+1;
         else r=mid;
     }

     return l;
 }

 int bs(int *arr , int l ,int r , int target){
    
     while(l<=r){
        int  mid=l+(r-l)/2;
         if(arr[mid]==target){
             return mid;
         }
         else if(arr[mid]>target)r=mid-1;
         else l=mid+1;
          
     }

     return -1;
 }

int search(int* arr, int n, int key) {
     int pivot=findPivot(arr,  n);

     int index = bs(arr, 0, pivot-1, key);
     if(index!=-1) return index;

     index=bs(arr, pivot, n,  key);

     return index;
}