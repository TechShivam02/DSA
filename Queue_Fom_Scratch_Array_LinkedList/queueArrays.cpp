#include <iostream>
using namespace std;

#define size 5



void Enqueue(int queue[] , int ele , int &front , int &rear){
    
    if( (front ==0 && rear == size-1) || (rear == (front-1) % (size-1)) ){
        cout<<endl<<"OverFlow "<<endl;
        return;
    }
    
    else if(front == -1){  // Insert First ele
        
        front = 0;
        rear = 0;
        
        queue[rear] = ele;
        
    }
    
    else if(rear == (size-1) && front >0){
        rear = 0;
        queue[rear] = ele;
    }
    
    else{
        
        rear++;
        queue[rear] = ele;
    }
    
    
}




void Dequeue(int queue[] , int &front , int &rear){
    
    if(front ==-1){
        cout<<endl<<" Underflow "<<endl;
        return;
    }
    
   
    int ele = queue[front];
    
    cout<<" "<<ele<<" "<<"Deleted"<<endl;
    
    
    if(front == rear){
        front = -1;
        rear = -1;
        
    }
    
    else if(front == size-1){
        front=0;
        
    }
    
    else
    {
        front++;
    }
    
    
    
    
    
   
}


void display(int queue[] , int front , int rear){
    
    
    if(front==-1){
        cout<<endl<<"Queue is Empty .. "<<endl;
        return;
    }
    
    
    else if(front ==0 && rear == size-1){  // queue is full
        
        cout<<endl<<"Display the Queue :"<<endl;
        
        for(int i=0;i<=rear ; i++){
            cout<<queue[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
    
    else if(front <= rear){
        
        cout<<endl<<"Display the Queue :"<<endl;
        
        for(int i=front ; i<=rear ; i++){
            cout<<queue[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
    
    else{
        
         cout<<endl<<"Display the Queue :"<<endl;
         
        for(int i=front ;i<size ;i++){
                cout<<queue[i]<<" ";
        }
        
        
        for(int i=0;i<=rear;i++){
             cout<<queue[i]<<" ";
        }
        
        cout<<endl;
        
        
        
    }
    
    
    
}






void Reverse(int queue[] , int front , int rear){
    
    
    if(front==-1){
        cout<<endl<<"Queue is Empty .. "<<endl;
        return;
    }
    
    
    else if(front ==0 && rear == size-1){  // queue is full
        
        cout<<endl<<"Display the Queue :"<<endl;
        
        for(int i=rear;i>=front ; i--){
            cout<<queue[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
    
    else if(front <=rear){
        
        cout<<endl<<"Display the Queue :"<<endl;
        
        for(int i=rear ; i>=front ; i--){
            cout<<queue[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
    
    else{
        
         cout<<endl<<"Display the Queue :"<<endl;
        
        for(int i=rear ; i>=0;i--){
             cout<<queue[i]<<" ";
        }
        
        
        for(int i=size-1 ;i >=front ;i--){
                cout<<queue[i]<<" ";
        }
        
        
        
        
        cout<<endl;
        
    }
    
    
    
}




int main()
{

    int queue[size];
    
    int front=-1;
    int rear=-1;
    
    
    
    int choice;
    
    do{
        cout<<endl<<"Enter 1 , for Enqueue "<<endl;
        cout<<"Enter 2 , for Dequeue "<<endl;
        cout<<"Enter 3 , for Display "<<endl;
        cout<<"Enter 4 , for Reverse "<<endl;
        
        cout<<"Enter 5 , for Exit "<<endl;
        
        
        cout<<"Enter the choice : ";
        
        cin>>choice;
        
        
        switch(choice){
            
            case 1 : 
                    int ele;
                    cout<<"Enter the ele : "<<endl;
                    cin>>ele;
                    
                    Enqueue(queue , ele , front , rear);
                    break;
                    
            case 2 : 
                    
                    Dequeue(queue , front , rear);
                    break;
                    
            case 3 :
                    
                    display(queue , front , rear);
                    break;
                    
            case 4 :
                    
                    Reverse(queue , front , rear);
                    break;
                    
            }
        
        
    }
    
    while(choice != 5);
    
    
    
    return 0;
}