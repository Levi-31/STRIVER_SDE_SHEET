#include <bits/stdc++.h>

using namespace std ;




int modularExponentiation(int x, int n, int m) {
	
	long long ans=1;
	 long long xx=x;
	while(n){
		if(n&1){
			ans = (ans * xx *1LL)%m;
		}
		
		xx = (xx*xx)%m;
		n>>=1;
	}

	return ans;
	
	
	}