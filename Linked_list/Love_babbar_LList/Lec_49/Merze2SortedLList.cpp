

// Code Studio 


Node<int>* solve(Node<int> *first , Node<int> *second){
    
    Node<int>* finalHead = first;
    
     Node<int>* curr1 = first;
     Node<int>* next1 = first->next;
    
     Node<int>* curr2 = second;
     Node<int>* next2 = second->next;
    
    while(next1 != NULL && curr2 != NULL){
        
        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            curr1->next = curr2;
             next2 = curr2->next;
            
            curr2->next = next1;
            curr1 = curr1->next;
            
            curr2 = next2;
            
            next1 = curr1->next;
           
            
        }
        
        else{
            curr1 = curr1->next;
            next1 = next1->next;
        }
    }
    
    
    // 1 3 4 6    // curr1 = 6  next1 = NULL  
    // 7 8        // curr2 = 7  Next2 = 8
    
        if(curr2  != NULL){
        curr1->next = curr2;
    }
    
    return finalHead;
    
    
}


Node<int>* sortTwoLists( Node<int>* first, Node<int>* second)
{
    if(first == NULL){
        return second;
    }
    
    else if(second == NULL){
        return first;
    }
    
    else if(first->data <= second->data){
        return solve(first , second);           // 1st always smaller  2nd bigger
    }
    
    else{
        return solve(second , first);     // 1st always smaller , 2nd bigger
    } 
}


// 1st approach 

 // using 2 pointers find min ele ,  storing i n vector ,, then create a llist  and return its head;
// Time Comp : O(n)   Space Comp : O(n)




// 2nd approach

// 1st llist passed always smaller
// 2nd bigger
//  2nd linked data ptr  can settle bw the first one then chage the links   from llist1 to llist 2

    // Time Comp : O(n);
    // Space comp : O(1);
    


