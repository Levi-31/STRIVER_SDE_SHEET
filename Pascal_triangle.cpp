#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long >>ans(n+1);

  for(int i=0;i<n;i++){
    ans[i]=vector<long long >(i+1,1);
    for(int j=1;j<i;j++){
       ans[i][j]=(ans[i-1][j]+ans[i-1][j-1]);
    }

  }
  ans.pop_back();

  return ans;


}
