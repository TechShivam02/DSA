
class Queue {
    
   public:
    
    int* arr;
    
    int qfront;
    int qrear;
    
    int size;
    
    
    Queue() {
        
        size=1001;
        arr = new int[size];
        qfront = 0;
        qrear = 0;
        
    }
    
    

    /*----------------- Public Functions of Queue -----------------*/

    
    bool isEmpty() {
        
        if(qfront == qrear){
            return true;
        }
        
        return false;
        
    }
    

    void enqueue(int data) {
           
        if(qrear == size){
            return;
        }
        
        if(qfront == qrear){  // Optimizing 
            qfront=0;
            qrear=0;    
        }
        
        arr[qrear] = data;
        qrear++;
        
        
    }

    int dequeue() {
        
       if(isEmpty()){
           return -1;
       }
        
        
       int ele = arr[qfront];
       qfront++;
        
       return ele;
        
    }
    

    int front() {
        
        if(isEmpty()){
           return -1;
       }
        
        return arr[qfront];
        
    }
    
    
};