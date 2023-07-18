#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
public:
list<int>dll;
map<int,pair<list<int>::iterator,int>>m;
int n;
    LRUCache(int capacity)
    {
       n=capacity;
    }
   
   void makeMostRecent(int key){
       dll.erase(m[key].first);

       dll.push_front(key);
       m[key].first=dll.begin();
   }
    int get(int key)
    {
       if(m.find(key)==m.end()) return -1;

       makeMostRecent(key);

       return m[key].second;

    }

    void put(int key, int value)
    {
       if(m.find(key)!=m.end()){
           m[key].second=value;
           makeMostRecent(key);
       }
       else{
           dll.push_front(key);
           m[key]={dll.begin(),value};
           n--;
       }

       if(n<0){
           int key_to_del = dll.back();
           m.erase(key_to_del);
           dll.pop_back();
           n++;
       }
    }
};
