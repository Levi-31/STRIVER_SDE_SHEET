#include <bits/stdc++.h> 
using namespace std;
int get_value(char a){
     unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        if(m.find(a)!=m.end()) return m[a];

        return -1;
}

int romanToInt(string s) {
     int i=0;
     int ans=0;
     while(i<s.size()-1){
         if(get_value(s[i]) >= get_value(s[i+1]))
           ans+=get_value(s[i]);
           else{
            ans-=get_value(s[i]);
           }
           i++;
     }
        ans+=get_value(s[i]);

     return ans;
}
