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
        
        int count=7;

        struct node* temp = head;
        
              while(temp != NULL && count--)
                {
                    cout<<temp->data << "->";
                    temp = temp->next;
                }


             cout<<endl<<endl;
          
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

                    cout<<"Loop Present at : "<<ptr->data<<endl;

                    return true;
                }


                mp[ptr->data] = true;
                ptr = ptr->next;


            }


            return false;

   }



}






bool DetectLoopFLOYD(struct node* head , struct node* &prev){


    if(head == NULL || head->next == head){
        return true;
    }


    else if(head->next == NULL){
        return false;
    }


    else{

            struct node* slow = head;
            struct node* fast = head->next;

            while(slow != fast  &&  fast!= NULL && fast->next != NULL){

                slow = slow ->next;
                fast = fast ->next -> next;
                
            }

            if(slow == fast)
            {

                prev = fast;
                slow = head;

                while( fast->next != slow && slow != fast){

                        prev = fast->next;

                    slow = slow->next;
                    fast = fast->next;
                }

                
                cout<<"Loop Present at : "<<slow->data<<endl;


                return true;
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
            insertEnd(tail , 5);    
            
            

            tail->next = head->next;   // making the llist  circular ..
            
            display(head);



                // Detect the loop  , if present find the node   




/*
        // Approach 1 : Using map    // Time Comp : O(n)  Space Comp : O(n)

            if(!DetectCycleMap(head)){               
                cout<<"Loop NOT Present "<<endl;       
            }
*/



        // Approach 2 : Using Floyd's Cycle Detection Algo   
        
            // Time Comp : O(n)  // Space Comp : O(1)

    struct node* prev = NULL;

        if(!DetectLoopFLOYD(head, prev)){             //  loop is present  or not , if present   finding the begining node ( when slow == fast  , slow = head   fast = prev pos   , slow->next fast->next  until slow!=head)
            cout<<"Loop NOT Present "<<endl;
        }

       

// if loop present , loop Removed 

    cout<<endl<<"Prev Node , Tail : "<<prev->data<<endl;   // Loop Removed Now ..
    prev->next = NULL;



    cout<<endl;
    display(head);

    if(!DetectLoopFLOYD(head, prev)){             //  loop is present  or not , if present   finding the begining node ( when slow == fast  , slow = head   fast = prev pos   , slow->next fast->next  until slow!=head)
            cout<<"Loop NOT Present "<<endl;
    }




    

/*          // My Code Studio Soln 



bool DetectLoopFLOYD(Node* head , Node* &prev){


    if(head == NULL || head->next == head){
        return true;
    }


    else if(head->next == NULL){
        return false;
    }


    else{

            Node* slow = head;
            Node* fast = head->next;

            while(slow != fast  &&  fast!= NULL && fast->next != NULL){

                slow = slow ->next;
                fast = fast ->next -> next;
                
            }

            if(slow == fast)
            {

                prev = fast;
                
                slow = head;

                while( fast->next != slow && fast != slow){

                        prev = fast->next;

                        slow = slow->next;
                        fast = fast->next;
                }

                 return true;
            }
        
        

            return false;
            
        }


}



Node *removeLoop(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    
    Node* prev = head;
    
    if(!DetectLoopFLOYD(head, prev)){    // Loop Not present           
           return head;
    }
    
     prev->next = NULL;
    
    return head;
    
    
    
    
    
    
}


*/




            


}

