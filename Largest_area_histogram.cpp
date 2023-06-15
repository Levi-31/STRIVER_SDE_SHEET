 #include <bits/stdc++.h>
 using namespace std;
 
 void NSL(vector<int>&heights , vector<int>&left ,int n){
   stack<pair<int,int>>st;

   for(int i=0;i<n;i++){
     if(st.size()==0){
       left.push_back(-1);
     }
     else if(st.size() && st.top().first < heights[i]){
         left.push_back(st.top().second);
     }

     else if(st.size() && st.top().first >= heights[i]){
       while(st.size() && st.top().first >= heights[i])
       st.pop();

       if(st.size()==0)left.push_back(-1);
       else left.push_back(st.top().second);
     }
     
      st.push({heights[i],i});
   }
 }
 void NSR(vector<int>&heights , vector<int>&right, int n){
   stack<pair<int,int>>st;

   for(int i=n-1; i>=0 ;i--){
     if(st.size()==0)right.push_back(n);

     else if( st.size() && st.top().first < heights[i])
     right.push_back(st.top().second);

     else if(st.size() && st.top().first>=heights[i]){
       while(st.size() && st.top().first >=heights[i])
       st.pop();

       if(st.size()==0)right.push_back(n);
       else right.push_back(st.top().second);

     }

     st.push({heights[i],i});


   }
   reverse(right.begin(),right.end());
 }
 
 int largestRectangle(vector < int > & heights) {
   vector<int> left ,right ;
   int n=heights.size();
   NSL(heights,left,n);
   NSR(heights,right,n);

   int max_area =INT_MIN;



  for(int i=0;i<n;i++){
    int width = right[i]-left[i]-1;
    int area  = width * heights[i];
    max_area =max(max_area , area);
  }


  return max_area;


 }