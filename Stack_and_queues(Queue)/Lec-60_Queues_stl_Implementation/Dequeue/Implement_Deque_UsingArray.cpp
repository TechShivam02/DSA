#include <bits/stdc++.h> 


class Deque
{
    
public:
    
    int *arr;
    int size;
    
    int front;
    int rear;
    
    
    Deque(int n)
    {
        size=n;
        arr = new int[n];
        front=-1;
        rear=-1;
        
    }
    
    
    bool pushFront(int ele)
    {
        
 // step1 : check queue is full  :  1.1  front = 0  ,rear = last    1.2  rear= anywhere middle   ,front = rear+1
        
        if( (front == 0 && rear==size-1) ||  ( rear == (front-1) % size)  ){
            return false;
        }
        
        
 // step2 , is it first ele to be inserted 
        
        else if(front==-1){
            front=0;
            rear=0;
            
            arr[front] = ele;
            
            
            return true;
        }
        
   // Step3 : Cyclic Nature
        
        else if(front==0 && rear<size-1){
            front= size-1;
            arr[front] = ele;
            return true;
        }
        
        
   // Step 4 : Normal CASE (:
        else{
            front--;
            arr[front] = ele;
            return true;
        }
   
 }
    
    
    

    bool pushRear(int ele)
    {
         
 // step1 : check queue is full  :  1.1  front = 0  ,rear = last    1.2  rear= anywhere middle   ,front = rear+1
        
        if( (front == 0 && rear==size-1) ||  ( rear == (front-1) % size ) ){
            return false;
        }
        
  
 // step2 , is it first ele to be inserted 
        
        else if(front==-1){
            front=0;
            rear=0;
            
            arr[rear] = ele;
            
            return true;
        }
        
        
 // Step3 : Cyclic Nature
        
        else if(front>0 && rear==size-1){
            rear= 0;
            arr[rear] = ele;
            return true;
        }
        
        
   // Step 4 : Normal CASE (:
        else{
            rear++;
            arr[rear] = ele;
            return true;
        }
        
    }
    
    
    int popFront()
    {
        
        //Step1 :  check it is empty
        if(front==-1 && rear==-1){
            return -1;
        }
        
        
        // Step 2 :  single Ele;
        
        else if(front==rear){
            int top = arr[front];
            
            front=-1;
            rear=-1;
            
            return top;
        }
        
        
        // Step 3 : Cyclic Nature 
        
        else if(front==size-1){
            
            int top = arr[front];
            
            front=0;
            
            return top;
            
        }
        
        else{
            
            int ele = arr[front];
            front++;
            
            return ele;
        }
        
        
        
        
        
    }

   
    int popRear()
    {
        //Step1 :  check it is empty
        if(front==-1 && rear==-1){
            return -1;
        }
        
        
        // Step 2 :  single Ele;
        
        else if(front==rear){
            int top = arr[front];
            
            front=-1;
            rear=-1;
            
            return top;
        }
        
        
        // Step 3 : Cyclic Nature 
        
        else if(rear==0){
            
            int top = arr[rear];
            
            rear=size-1;
            return top;
            
        }
        
        else{
            
            int ele = arr[rear];
            rear--;
            
            return ele;
        }
        
    }

    
    int getFront()
    {
        if(front==-1 && rear==-1){
            return -1;
        }
        
        return arr[front];
        
    }

    int getRear()
    {
      if(front==-1 && rear==-1){
            return -1;
        }
        
        return arr[rear];
    }

   
    bool isEmpty()
    {
        if(front==-1 && rear==-1){
            return true;
        }
        
        return false;
        
    }

    
    bool isFull()
    {  
        if( (front == 0 && rear==size-1) || ( rear == (front-1) % size ) ){
            return true;
        }
        
        return false;
        
    }
    
    
};



