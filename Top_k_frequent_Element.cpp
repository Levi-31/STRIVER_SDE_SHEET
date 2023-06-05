#include <bits/stdc++.h> 
using namespace std;
typedef pair<int,int> pi;
vector<int> KMostFrequent(int n, int k, vector<int> &nums)
{
     unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
       priority_queue<pi , vector<pi>,greater<pi>> q;
       for(auto x:m){
           q.push({x.second , x.first});
           if(q.size()>k)
               q.pop();
       }
        // cout<<m[nums[0]]<<endl;
        
        vector<int> ans;
        
        while(q.size()){
            ans.push_back(q.top().second);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;


}
