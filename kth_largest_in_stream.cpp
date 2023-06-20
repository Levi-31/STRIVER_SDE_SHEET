#include <bits/stdc++.h> 
using namespace std;

class Kthlargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int sz;
    Kthlargest(int k, vector<int> &arr) {
       sz=k;
       for(auto x:arr){
           pq.push(x);
           if(pq.size()>sz)pq.pop();
       }
    }

    void add(int num) {
       pq.push(num);
       if(pq.size()>sz)pq.pop();

    }

    int getKthLargest() {
       
        
       return pq.top();
    }

};