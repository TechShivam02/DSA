#include <bits/stdc++.h> 

void solve(stack<int>&stk , int count ,  int n ){
    if(count == n/2){
        stk.pop();
        return;
    }
    
    int ele = stk.top();
    stk.pop();
    
    solve(stk , count+1 , n);
    
    stk.push(ele);
    
}
    
void deleteMiddle(stack<int>&stk, int n){

    int count=0;
    
    solve(stk , count , n );
    
    
}