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




void insertBegin(struct node* &head , int newData){
        
              struct node* temp = new node(newData);
              temp ->next = head;
              
              head = temp;
}

void deleteFront(struct node* &head){
        
        struct node* temp = head;
        
        head = head->next;
        
        delete(temp);
        
    }


 void display(struct node* head){
        
              while(head != NULL)
                {
                    cout<<head->data << "->";
                    head = head->next;
                }
                
                cout<<endl<<endl;
        
}





int main(){


            struct node* head = NULL;

            struct node* tail;
            
        
        int op = 0;


    bool check = true;


    while(op != 5){



            cout<<"Enter the operation : 1-Push , 2-pop , 3 - Display , 4-Top , 5-Exit"<<endl;
            


            int operation;
            cin>>operation;



        switch (operation) {

            case 1:

                

                cout<<"Enter the value "<<endl;
                int ele;
                cin>>ele;

                insertBegin(head , ele);

                break;


            case 2:

                
                deleteFront(head);
                cout<<"poped "<<endl;
                
                break;



            case 3:
                
                    display(head);
                    cout<<endl;

                break;


            case 4:
                
               
                cout<<"Top : "<<head->data<<endl;

                break;


            case 5:
               op = 5;
               cout<<"Exiting the Loop ...."<<endl;
               break;

            default :
                cout<<"Entered the Wrong Operation "<<endl;
                break;
           
           
        }

}
    

    
    return 0;
}