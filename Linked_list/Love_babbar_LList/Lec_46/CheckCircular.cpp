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


bool DetectCycle(struct node* head){

    if(head == NULL || head->next == head){
        return true;
    }

    else if(head->next == NULL){
        return false;
    }

   
   else{

            struct node* slow = head;
            struct node* fast = head->next;

            while(slow != fast && fast!= NULL && fast->next != NULL){

                slow = slow ->next;
                fast = fast ->next -> next;
                
            }

            if(slow == fast)
            {
                return true;
            }

            return false;
            


   }

}


bool DetectCycleMap(struct node* head){

        if(head == NULL || head->next == head){
                return true;
        }



        else if(head->next == NULL){
            return false;
        }

   
   else{

            unordered_map<int,bool> mp;

            struct node* ptr = head;

            
            while(ptr != NULL){

                if(mp[ptr->data] == true){
                    return true;
                }


                mp[ptr->data] = true;
                ptr = ptr->next;


            }


return false;




   }


}


int main(){
        
        
            struct node* head = new node(1);
            struct node* tail = head;
        
            insertEnd(tail , 2);
            insertEnd(tail , 3);
            insertEnd(tail , 4);
            // insertEnd(tail , 5);
            

            // tail->next = head;   // making the llist  circular ..
            // head->prev = tail;  // making the llist  circular .


            display(head);




//   Approach 1 :
//Using slow and fast   ,, { edge cases  odd and even nodes   slow=head , fast = head->next      fast!= NULL   && fast->next!= NULL   }
  

            cout<<DetectCycle(head)<<endl;  // using Slow And fast ..
// if the length of linked list is very large  and and if it is circulr  , then slow and fast  meet  may in O(2n 3n ) or more
// best : O(n);    space O(1)


            cout<<DetectCycleMap(head)<<endl;         // time O(n)  space O(n)   
            // time comp better then first  



}

