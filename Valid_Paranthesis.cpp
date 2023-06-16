
#include <bits/stdc++.h>

using namespace std ;

bool isOpening(char c){
    return (c=='(' || c=='{' || c=='[')?true:false;
}



bool isValidParenthesis(string s)
{
    stack<char>st;

    for(int i=0;i<s.size();i++){
         if(isOpening(s[i])){
             st.push(s[i]);
         }
         else{
           if (s[i] == ')') {
             if ( st.size() && st.top() == '(')
               st.pop();
             else
               return false;
           } 
           else if (st.size()&& s[i] == '}'){
               if(st.top()=='{')
               st.pop();
               else 
               return false;
           }
           else if(st.size()&& s[i]==']'){
               if(st.top()=='[')st.pop();
               else return false;
           }
         }
    }

    return st.size()==0;
}