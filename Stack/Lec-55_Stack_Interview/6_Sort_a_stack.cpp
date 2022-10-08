#include <bits/stdc++.h> 

void StoreInSorted(stack<int> &stk , int ele){
    
    if(stk.empty() == true || ( !stk.empty() && ele >= stk.top() ) ){
        stk.push(ele);
        return;
    }
    
    int temp = stk.top();
    stk.pop();
    
    StoreInSorted(stk , ele);
    
     stk.push(temp);
    
}
    
void  solve(stack<int> &stk){
    if(stk.empty() == true){
        return;
    }
    
    int ele = stk.top();
    stk.pop();
    
    solve(stk);
    
    StoreInSorted(stk , ele);
    
    
}


    
void sortStack(stack<int> &stk)
{
    solve(stk);
    
}