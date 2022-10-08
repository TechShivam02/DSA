#include <bits/stdc++.h> 



bool isOperator(char &ch){
    
    if(ch == '+' || ch == '-' || ch == '*' ||  ch == '/' ){
        return true;
    }
    return false;
}




bool findRedundantBrackets(string &str)
{
    stack<char> stk;
    
  for(int i=0;i<str.size();i++){
     
        if( str[i] == '(' ||  isOperator(str[i]) ){
           stk.push(str[i]);
        }
      
      else if(str[i] == ')'){
    
          bool isReduntant = true;
          
          while(stk.top() != '('){
              if( isOperator( stk.top()) ){
                  isReduntant = false;
              }  
              stk.pop();
          }
          
         
          if(isReduntant == true){
              return true;
          }
          
          stk.pop();
          
       }
    
  }
    
    
        return false;
    
               
  }
