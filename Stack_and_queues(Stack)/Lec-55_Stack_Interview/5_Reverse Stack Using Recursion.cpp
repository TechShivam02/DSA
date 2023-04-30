

void insertAtBottom(stack<int> &stk , int ele){
    
    if(stk.empty() == true){
        stk.push(ele);
        return;
    }
    
    int temp = stk.top();
    stk.pop();
    
    insertAtBottom(stk , ele);
    
    stk.push(temp);
    
}
    
    
void solve(stack<int> &stk){
    
    if(stk.empty() == true){
        return;
    }
    
    int ele = stk.top();
    stk.pop();
    
    solve(stk);
   
    insertAtBottom(stk , ele);
    
    
  
    
}
    
void reverseStack(stack<int> &st) {
   
   solve(st);
    
}