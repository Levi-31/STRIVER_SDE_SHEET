#include <bits/stdc++.h>

using namespace std ;



string longestPalinSubstring(string s)
{
    int max_len=1;
    int start=0;
    int n=s.size();

    for(int i=0;i<n-1;i++){
        int l=i,r=i;
        while(l>=0 && r<n){
            if(s[l]==s[r]){
                l--;
                r++;
            }
            else break;
        }
    if(max_len<r-(l+1)){
        max_len = r-l-1;
        start=l+1;

    }
    }
    for(int i=0;i<n-1;i++){
        int l=i,r=i+1;
        while(l>=0 && r<n){
            if(s[l]==s[r]){
                l--;
                r++;
            }
            else break;
        }
    if(max_len<r-(l+1)){
        max_len = r-l-1;
        start=l+1;

    }
    }

    return s.substr(start,max_len);


}