#include <bits/stdc++.h> 
using namespace std;
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    
    unordered_map<int,int>m;
    int i=0,j=0;
    vector<int>ans;
    while(j<arr.size()){
        m[arr[j]]++;

       if(j-i+1 == k){
            ans.push_back(m.size());
              m[arr[i]]--;
           if(m[arr[i]]==0)m.erase(arr[i]);
           i++;
        }
        j++;
    }


    return ans;
	
}
