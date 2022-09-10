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
        
        struct node* temp = head;
        
              while(temp != NULL)
                {
                    cout<<temp->data << "->";
                    temp = temp->next;
                }


             cout<<endl<<endl;
          
}


void removeDuplicates1(struct node* head){

    
    if(head == NULL || head->next == NULL){
        return;
    }


    
        // 1 5 2 1 3 5 4 4


        struct node* curr = head;

    while(curr  !=  NULL){


            struct node* prev = curr;
            struct node* ptr = curr->next;

            
            while(ptr != NULL && ptr->data != curr->data){
                prev = prev->next;
                ptr=ptr->next;
            }


        if(ptr!= NULL && ptr->data == curr->data ){
            
            struct node* temp = ptr;

            prev->next = ptr->next;
            delete ptr;

        }
        
        
        curr = curr->next;



    }


}




void removeDuplicates3(struct  node* head){

    unordered_map<int,int> mp;

if(head == NULL || head->next == NULL){
    return;
}


    struct node* prev = head;
    struct node* curr = head->next;
    

    mp[prev->data] = true;

    while(curr != NULL){   // note no ele can appear more then 2


        if( mp[curr->data] == true ){
                
            struct node* temp = curr;
            prev->next = curr->next;
            delete temp;

            curr = prev->next;

        }

        else{

            mp[curr->data] = true;
            prev = prev->next;
            curr = curr->next;

        }


    }
}



int main(){
        
            // struct node* head = new node(1);
            // struct node* tail = head;
            
        
            // insertEnd(tail , 5);

            // insertEnd(tail , 2);
            
            // insertEnd(tail , 1);
            
            // insertEnd(tail , 3);

            // insertEnd(tail , 5);

            // insertEnd(tail , 4);
            
            // insertEnd(tail , 4);
            
            


            struct node* head = new node(1);
            struct node* tail = head;
            
        
            insertEnd(tail , 1);
            insertEnd(tail , 2);
            insertEnd(tail , 2);
            insertEnd(tail , 3);
            insertEnd(tail , 3);
            insertEnd(tail , 4);
            insertEnd(tail , 4);
            


            
           

        cout<<endl<<"Before : "<<endl;
        display(head);

           

/*  

    Condition  For Unsorted llist :  1 ele can be appeared only for max 2 times ,   , for eg    1 5 2 7 1 4 2   //  1 can appered max 2 times
    


    // 1st approach :    for each ele  find if it repeat from next position , if  yes , dete that entry
        // time comp : O(n2)  spaceComp : O(1);




    // 2nd approach           2.1  ) sort the linked list     2.2) remove dup from sorted llist 
                              2.1  Time comp : O(n LOg(n))     2.2  O(n)    OverALL -->  O(N log(N)) 

    
    

    // 3rd Approached  , using map     

        //  1 5 2 7 1 4 2       // for each ele  mark a entry in map if visited or not , if not mark true
                                // if already visted  , delete that  ele
        
    // Time comp : O(n)               Space Comp : O(n);



*/




    // // by approach 1 :    checking for each ele     time : O(n2)  space : 1
    //removeDuplicates1(head); 




    // // by approach 2 :    By sorted ..    time : nlogn    space : 1
    //removeDuplicates2(head);   // sorting not done yet 



    // // by approach 3 :    map
    removeDuplicates3(head);   // Time comp : O(n)  spaceComp : O(n);

    

    






     
        cout<<endl<<"After : "<<endl;
        display(head);





        


return 0;


}