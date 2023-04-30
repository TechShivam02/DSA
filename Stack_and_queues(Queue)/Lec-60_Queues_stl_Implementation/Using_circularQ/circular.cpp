#include <bits/stdc++.h> 
class CircularQueue{
    
  public:
    
        int* arr;
    
        int qfront;
        int qrear;

        int size;
   
    CircularQueue(int n){
      
        size=n;
        arr = new int[size];
        
        qfront=-1;
        qrear=-1;
        
    }
    
    
    bool isFull(int *arr , int qfront , int qrear , int size){
        if(qfront==0 && qrear==size-1){
            return true;
        }
         
         if(qrear == (qfront-1) % (size) ){
            return true;
        }
        
        return false;
        
    }
    
    
    
    bool isEmpty( int qfront , int qrear ){
        
        if(qfront==-1 && qrear==-1){
            return true;
        }
        
        return false;
         
        
    }
    
    

    bool enqueue(int data){
        
        if( isFull(arr , qfront , qrear , size) ){
            return false;
        }
        
        if(qfront==-1){
            
            qfront=0;
            qrear=0;
            
            arr[qrear] = data;
            return true;
        }
        
        if(qrear == size-1){
            qrear=0;
            arr[qrear] = data;
            
            return true;
        }
        
        else{
            qrear++;
            
            arr[qrear] = data;
            return true;
        }
        
        return false;
        
        
        
    }

    
    int dequeue(){
        
        if(isEmpty(qfront , qrear)) {
            return -1;
        }
        
        int ans=arr[qfront];
        
        if(qfront == qrear){
           
            qfront=-1;
            qrear=-1;
            
            return ans;
            
        }
        
        if(qfront == size-1){
            qfront=0;
           
            return ans;
            
        }
        
        else{
            qfront++;
            return ans;
        }
        
    }
    
    
};