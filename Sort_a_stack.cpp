#include <bits/stdc++.h> 
using namespace std;

void sortedInsert(stack<int>&st , int top){
	if(st.size()==0){
		st.push(top);
		return ;
	}
	if(st.top()<top){
		st.push(top);
		return;
	}

	int n=st.top();
	st.pop();
	sortedInsert(st,top);
	st.push(n);
}
void sortStack(stack<int> &st)
{
	if(st.size()==0) return ;

	int top=st.top();
	st.pop();
	sortStack(st);
	sortedInsert(st,top);
}