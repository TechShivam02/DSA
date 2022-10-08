#include <bits/stdc++.h> 
class TwoStack {

public:

   int *arr;
    
    int top1;
    int top2;
    
    int size;
    
    
    TwoStack(int s) {
        
        arr  = new int[s];
            
        this->size = s;
        top1 = -1;
        top2 = s;
           
    }
    
    
    
    // Push in stack 1.
    void push1(int ele) {
      
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = ele;
        }
    }

    
    
    // Push in stack 2.
    void push2(int ele) {
        
         if(top2 - top1 > 1){
            top2--;
            arr[top2] = ele;
        }
        
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        
        if(top1 >=0){
            return arr[top1--];
        }
        
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        
        if(top2 <size){
           return arr[top2++];
        }
        
        else{
            return -1;
        }
        
    }
    
    
};


