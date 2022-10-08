#include <bits/stdc++.h> 
int findMinimumCost(string str) {
      
    // Step1 , if odd Return -1;
    
    if(str.length() %2 != 0){
        return -1;
    }
    
    
    // Step2 : Remove Valid Windows
    
    stack<char> stk;
    
    for(int i=0;i<str.length();i++){
        
        if(str[i] == '{'){
            stk.push(str[i]);
        }
        
        else{  // it is closed bracket
            
            if(!stk.empty() && stk.top() == '{'){
                stk.pop();
            }
            
            else{
                stk.push(str[i]);
            }
            
            
        }
        
        
    }  // for loop EXIT
    
    
    
    int a=0;  // for closed
    int b=0; //for opened
    
    
    while(!stk.empty()){
        
        if(stk.top() == '{'){
            b++;
        }
        
        else{
            a++;
        }
        
        stk.pop();
        
    }
    
    
    return (a+1)/2 + (b+1)/2;
    
    
    
}