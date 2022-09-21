node* findMiddle(node* head){
    
    node* slow = head;
    node* fast = head->next;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}



node* merze(node* left , node* right){
    
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    
    
    node* ans = new node(-1);
    node* temp = ans;
    
    while(left != NULL && right != NULL)
    {
        if(left -> data  < right ->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
        
    }
    
    while(left != NULL){
            temp->next = left;
            temp = left;
            left = left->next;
    }
    
    
    while(right  != NULL){
            temp->next = right;
            temp = right;
            right = right->next;
    }
    
    
    ans = ans->next;
    return ans;
    
}


node* mergeSort(node *head) {
   
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    
    node* mid = findMiddle(head);
    
    
    // assiging  the left and right ptr's
    node* left = head;
    node* right = mid->next;
    mid->next = NULL;
    
    
    // Recursive calls (: 
    
    left =  mergeSort(left);
    right = mergeSort(right); 
 
    
    // merze krdo (:
 
    node* ans = merze(left , right);
    
    return ans;
    
}
