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


void  removeDuplicates(struct node* head){

        
        if(head == NULL || head->next == NULL){
            return;
        }


        struct node* curr = head;

        while(curr != NULL){
            
            // 1  2 2  3 3  4  5 5 ;

            if(curr->next != NULL && curr->data == curr->next->data){

                    struct node* temp = curr->next;

                    curr->next = curr->next->next;
                    delete temp;

            }

            else{
                
                curr = curr->next;

            }


        }


}



int main(){
        
        
            // struct node* head = new node(1);
            // struct node* tail = head;
            
        
            // insertEnd(tail , 2);
            // insertEnd(tail , 2);
            
            // insertEnd(tail , 3);
            // insertEnd(tail , 3);
            

            // insertEnd(tail , 4);
            
            // insertEnd(tail , 5);
            // insertEnd(tail , 5);



            struct node* head = new node(1);
            struct node* tail = head;
            
        
            insertEnd(tail , 1);
            insertEnd(tail , 1);
            
            insertEnd(tail , 2);
            insertEnd(tail , 2);
            

            insertEnd(tail , 3);
            
            insertEnd(tail , 3);
            insertEnd(tail , 3);





        cout<<endl<<"Before : "<<endl;
        display(head);

            // 1  2 2  3 3  4  5 5 ;

            removeDuplicates(head);

        cout<<endl<<"After : "<<endl;
        display(head);



        // Time Comp : O(n);
        // Space comp : O(1);

        


return 0;


}