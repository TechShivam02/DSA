


// Approach 1 : 

/*      // Time Comp :  O(n2);

    1.1 ) Create a Clone of linked list
    1.2 ) for each node , find its random ptr , (with dist)
      1.2.1) for each node in cline llist assign the Random Ptr

*/




// Approach 2 :    // Reducing  Time Comp , but using Space Comp 

/*      // Time Comp :  O(N)  // Space Comp : O(N)

    2.1 ) create a clone of original linked list With next ptr
    2.2 ) create a map , in which  original llist and clone llist   node value mapped    , for eg (original --> clone) 1-->1 2-->2 

    2.3) clone -> random  = map[original -> random]
*/






// Approach 3 : OPTIMIZED ....   // By Changing links
    // Time Comp : O(n) // Space Comp : O(1);



    Node *copyList(Node *head)
    {
        
        Node* curr = head;
        
        while(curr){
        
            int val = curr->data;
            
            Node* temp = new Node(val);
            
            Node* nextPtr = curr->next;
            
            curr->next = temp;
            temp->next = nextPtr;
            
            curr = nextPtr;
            
        }
        
        
        
        curr = head;
        
        while(curr ){
            
            if(curr -> arb){
                curr->next->arb = curr->arb->next;
            }
            
            else{
                 curr->next->arb = NULL;
            }
            
            curr = curr->next->next;
        }
        
        
        Node *original = head;
        Node *copy = head->next;
        
        Node* ans = copy;
        
        
        while(original && copy){
            
            original -> next = original ->next -> next;
            
            if(copy->next){
                copy->next = copy->next->next;
            }
            
            else{
                copy->next = NULL;
            }
            
            original = original->next;
            copy = copy->next;
            
        }
        
        
        
        return ans;
        
        
        
    }