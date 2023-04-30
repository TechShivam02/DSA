
queue<int> modifyQueue(queue<int> q, int k) {
   
    int n = q.size();
    stack<int> stk;
    
    
    
    for(int i=0;i<k;i++){
        int peek = q.front();
        
        q.pop();
        
        stk.push(peek);
    }
    
    
    while(!stk.empty()){
        q.push(stk.top());
        
        stk.pop();
    }
    
    
    int rem = n-k;
    
    while(rem--){
        int peek = q.front();
        q.pop();
        
        q.push(peek);
    }
    
    
    return q;
    
    
    // Time Comp : O(n);
    // Space Comp : O(k);
    
    
    
    
    
}