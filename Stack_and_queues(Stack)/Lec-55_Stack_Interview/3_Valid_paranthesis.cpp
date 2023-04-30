bool isValidParenthesis(string str)
{
    stack<char> stk;
    
    for(int i=0;i<str.length();i++){
        if(str[i] =='(' || str[i] =='[' || str[i] =='{'  ){
            stk.push(str[i]);
        }
        
        else{
            if(str[i] ==')' && !stk.empty() && stk.top() == '('){
                  stk.pop();
            }
            
            else if(str[i] ==']' && !stk.empty() && stk.top() == '['){
                  stk.pop();
            }
            
            else if(str[i] =='}' && !stk.empty() && stk.top() == '{'){
                  stk.pop();
            }
            
            else{
                return false;
            }
        }
        
    }
    
    return stk.empty()==1;
    
    
}