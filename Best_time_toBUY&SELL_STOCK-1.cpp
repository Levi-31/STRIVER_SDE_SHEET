#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
       int sum =0 ;
        int i = 0 , j=1;
        while( j< prices.size()){
            if(prices[i] <prices[j]){
                sum=max(prices[j]-prices[i], sum);
                j++;
            }
            else{
                i=j;
                j++;
            }
            
            
        }
        return sum;

}