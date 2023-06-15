#include <bits/stdc++.h> 
using namespace std;
vector<int> findSpans(vector<int> &price) {
   vector<int> ans;
   stack<pair<int,int>>st;
  
   for(int i=0;i<price.size();i++){
        int span=1;
       if(st.size()==0)ans.push_back(span);

       else{
           while(st.size() && st.top().first<=price[i]){
               span+=st.top().second;
               st.pop();
           }
           ans.push_back(span);
          
       }
       st.push({price[i],span});

   }

   return ans;
}