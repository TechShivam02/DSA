#include<iostream>
// #include<pair>

using namespace std;
        
        
struct node{
        
    int data;
    struct node* next;
    struct node* prev;
    
            
    node(int newData){
                
    this->data = newData;
    
    this->next = NULL;
    this->prev = NULL;
    
                
                
    }
        
};



          
void insertEnd(struct node* &tail , int newData){
        
       struct node* temp = new node(newData);
        
        tail ->next = temp;
        temp->prev = tail;
        
        tail = tail->next;
        
}



 void display(struct node* head){
        
    cout<<endl;

        int count=0;

        struct node* temp = head;
        
        do{
                cout<<temp->data<<" -> ";
                temp = temp->next;

        }while(temp != head);

    cout<<"head";

        
}


int  getMiddle(struct node* head){

        struct node* temp = head;

        int count=0;



        do{
            
            count++;
            temp = temp->next;

        }while(temp != head);




        int mid = count/2;
        
        if(count%2==0){
                return mid;
        }

        return mid+1;

}


void split2halves(struct node* head , struct node* tail , int mid){

        if(head== NULL || head->next == head){
            return;
        }

        
        

    struct node* prev = head;
    struct node* curr = head->next;

        int count =1;

        while(curr != head && count<mid){

            prev  = prev->next;
            curr  = curr->next;

            count++;

        }

    cout<<"Head : "<<head->data<<endl;
    cout<<"Prev : "<<prev->data<<endl;

    cout<<"Curr : "<<curr->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    
    
    
    prev->next = head;
    tail->next = curr;

    display(head);
    display(curr);
    


}


int main(){
        
        
            struct node* head = new node(1);
            struct node* tail = head;
            
        
            insertEnd(tail , 2);
            insertEnd(tail , 3);
            insertEnd(tail , 4);
            insertEnd(tail , 5);
            
            

            

            tail->next = head;   // making the llist  circular ..

            display(head);
            cout<<endl<<endl;





            int mid = getMiddle(head);

            split2halves(head , tail , mid);






}



