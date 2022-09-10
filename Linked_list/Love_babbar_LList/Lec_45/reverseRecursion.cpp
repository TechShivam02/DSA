#include<iostream>
#include<unordered_map>

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
        
        int count=8;

        struct node* temp = head;
        
              while(temp != NULL && count--)
                {
                    cout<<temp->data << "->";
                    temp = temp->next;
                }


             cout<<endl<<endl;
          
}



void  reverseByRecur(struct node* &head , struct node* curr , struct node* prev  ){

            
                //  1 --> 2 --> 3 --> 4 --> 5 



    if(curr == NULL){
        head = prev;
        return;
    }

    struct node* forward = curr->next;
    curr->next = prev;

    prev = curr;
    curr = forward;


    reverseByRecur(head , curr , prev);


}



struct node* reverseByRecur2(struct node* head){
   
    if(head == NULL || head->next == NULL){
        return head;
    }

    struct node* newhead = reverseByRecur2(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;

}  

int main(){
        
        
            struct node* head = new node(1);
            struct node* tail = head;
            
        
            insertEnd(tail , 2);
            insertEnd(tail , 3);
            insertEnd(tail , 4);
            insertEnd(tail , 5);


            display(head);


/*

// 1st method By recursion ...

    
            struct node* prev = NULL;
            struct node* curr = head;

            reverseByRecur(head , curr , prev);

            display(head);

*/

            
            struct node* ptr = reverseByRecur2(head);   // Time comp : O(n) ,   space comp : O(n)
            display(ptr);



    
}
            