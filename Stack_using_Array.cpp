#include <bits/stdc++.h> 
using namespace std;
// Stack class.
class Stack {
    
public:
    vector<int>v;
    int cap;
    Stack(int capacity) {
      cap=capacity;
    }

    void push(int num) {
        if(v.size()<cap)
       v.push_back(num);
    }

    int pop() {
        if(v.size()){
        int ele=v.back();
       v.pop_back();
       return ele;
        }

        return -1;
    }
    
    int top() {
        if(v.size())
        return v.back();

        return -1;
    }
    
    int isEmpty() {
       return v.size()==0;
    }
    
    int isFull() {
        return v.size()==cap;
    }
    
};