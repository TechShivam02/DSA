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



void sortLLBycount012(struct node* head){

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

    struct node* ptr = head;

    while(ptr != NULL){
        
        if(ptr->data == 0){
            count0++;
        }


       else if(ptr->data == 1){
            count1++;
        }

        else{
            count2++;
        }

        ptr = ptr->next;

}




    cout<<"0 : "<<count0<<endl;
    cout<<"1 : "<<count1<<endl;
    cout<<"2 : "<<count2<<endl;


    cout<<endl;


    struct node* temp=  head;

    while(temp){

        if(count0){
            temp->data = 0;
            count0--;
        }

        else if(count1){
            temp->data = 1;
            count1--;
        }

        else{
            temp->data =2;
            count2--;
        }

        temp = temp->next;
    }  
}




void insertTailUpdate(struct node* &head , struct node* &tail , int data){

    struct node* temp = new node(data);

    tail->next = temp;
    tail = tail->next;


}


void sortLL_changeLinks012(struct node* &head){

    if(head == NULL && head->next == NULL){
        return;
    }


    struct node* zerohead = new node(-1);
    struct node* zerotail = zerohead;

    struct node* onehead = new node(-1);
    struct node* onetail = onehead;

    struct node* twohead = new node(-1);
    struct node* twotail = twohead;



    struct node* ptr = head;

    while(ptr != NULL){
       
        if(ptr->data == 0){
                insertTailUpdate(zerohead , zerotail , 0);
        }

        else if(ptr->data == 1){
                insertTailUpdate(onehead , onetail , 1);
        }

        else{
                insertTailUpdate(twohead , twotail , 2);
        }



        ptr = ptr->next;
        
    }




/*
    // correct   , but not for all cases ..

    // dummy  --> 0
    // dummy  --> 1 --> 1
    // dummy  --> 2 --> 2


    zerotail -> next = onehead->next;
    onetail->next = twohead->next;
    twotail->next = NULL;

  
    head = zerohead->next;


*/




                // Final Ans ..  for llist  eighther containig No 0 || No 1  || No 2

// if No  2 in llist     or if No  1 in llist 

    // dummy  --> 0  -->  0 --> 0 
    // dummy
    // dummy  

    zerotail -> next = onehead;
    onetail->next = twohead;
    twotail->next = NULL;




    // dummy -->  0 -->  0  --> dummy --> 2 -->  2 

    // Or input :    dummy -> 0 -> 0 -> 0 -> 0 -> 0 -> dummy ->dummy 

        
    head = zerohead;

    struct node* prev = head;
    struct node* curr = head->next;

    while(curr != NULL){

        if(curr -> data == -1){
            
            struct node* temp = curr;
            
            curr = curr->next;

            prev->next = curr;
            delete temp;

        }

        else{
            prev = prev->next;
            curr = curr->next;
        }
        
    }

    head = zerohead->next;
}





int main(){
        
        
            struct node* head = new node(1);
            struct node* tail = head;
            
        
            insertEnd(tail , 0);
            insertEnd(tail , 1);
            insertEnd(tail , 2);

            insertEnd(tail , 2);


           
            
            display(head);






/*


// Approach  1  ,  count 0,1,2,    using 3 varibles  ,   replace them llist   count of 0,1,2     

    sortLLBycount012(head);
                                // Time comp : O(n)  Space comp : O(n)
    display(head);

*/







                    // if Interviwer asked  , To not to replace data ,   Approach 1   fails );

// Approach 2 
    // 1 0 1 2 2    

    /*      // by changing the links  ,  create  3 different linkedlist    0 , 1 , 2  merze them ..

        dummy --> 0   -->    // ensure a dummy node  before 0   else    there will be many if conditions

        dummy --> 1--> 1-->   // ensure a dummy node  before 1  linked list   else    there will be many if conditions

        dummy --> 2 --> 2    // ensure a dummy node  before 2  linkedlist  , else    there will be many if conditions

    
    */

    sortLL_changeLinks012(head);
    display(head);






}
