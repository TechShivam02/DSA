#include <bits/stdc++.h> 

void solve(stack<int> &stk, int ele , int n){
    if(n==0){
        stk.push(ele);
        return;
    }
    
    int temp = stk.top();
    stk.pop();
    
    
    solve(stk , ele , n-1);

    stk.push(temp);
    
}
stack<int> pushAtBottom(stack<int>& stk, int ele) 
{
    int n = stk.size();
    
    solve(stk , ele , n);
    
    return stk;
    
    
}
