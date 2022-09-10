#include<iostream>
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
        
        struct node* temp = head;
        
              while(temp != NULL)
                {
                    cout<<temp->data << "->";
                    temp = temp->next;
                }


             cout<<endl<<endl;
          
}





struct node* ReverseByKgroup(struct node* head , int k){


    if(head == NULL){
        return head;
    }


        int count = 0;

        struct node* prev = NULL;
        struct node* curr = head;

        struct node* forward = head;

        while(forward != NULL  && count < k){
            forward = curr->next;

            curr -> next = prev;
            prev = curr;
            curr = forward;

            count++;

    }

        if(forward != NULL){
              head -> next = ReverseByKgroup(forward ,  k);
        }

       return prev; 

}




int main(){
        
        
            struct node* head = new node(1);
            struct node* tail = head;
            
        
            insertEnd(tail , 2);
            insertEnd(tail , 3);
            insertEnd(tail , 4);
            insertEnd(tail , 5);
            insertEnd(tail , 6);

           
           
            //  1 2 3 4 5 6    k=2;      2->1 --> 4->3 --> 6->5



        display(head);

        
        int k = 2;
        struct node* ptr = ReverseByKgroup(head , k);

        display(ptr);

        // Time Comp : O(n);
        // Space Comp : O(n)

        
        






}