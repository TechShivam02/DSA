//  LList   --->    1 2 3 2 1  




// Approach 1:

    /*
        1.1  store in vector    pick each ele and push it into vector  // Space : O(n)  time : O(n)
        1.2  using 2 pointer check palindrome or not     // time  O(n/2)


        overall -->  Space : O(n)  ,,   Time : O(n)
    
    */




// Approach 2:   // Optimized    reduce the space comp : O(1)   <---- from O(n)

    /*
         
        2.1 )   find the middle of llist    // Time : O(n/2)   :   O(n) 
        2.2 )   middle -> next = reverse    // Time : O(n)
        2.3 )   compare   :  start1  = head , start2 = mid->next     Store the ans   // Time O(n)

        2.4 )   mid->next = reverse  ,,   so that original llist does change       // Time : O(n)


        Overall Time : O(N)   SpaceComp : O(1)

    */



     Node* getMid(Node* head){
       
       Node* slow=head;
       Node* fast=head->next;
       
       while(fast !=NULL && fast->next!=NULL){
           fast = fast -> next ->next;
           slow = slow-> next;
       }
       return slow;
   }
   
   
   Node* reverse(Node* head){
       
       Node* curr=head;
       Node* prev=NULL;
       Node* forward=NULL;
       
       while(curr!=NULL){
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
       }
       
       return prev;
   }
   
   
   
   
   bool isPalindrome(Node *head)
   {
      if(head == NULL || head->next==NULL){
      return true; 
      
      }
      
       Node* mid=getMid(head);  // 1
       
     
       Node* temp= mid->next;


       mid->next= reverse(temp);   //2
       
       
       Node* start1=head;
       Node* start2=mid->next;
       
       bool ans = true;
       
       while(start2!=NULL){   // 3
           
           if(start1->data!=start2->data){
              ans = false;
              break;
              
           }
           
           start1=start1->next;
           start2=start2->next;
       }
       
       
       mid->next= reverse(mid->next);   // 4
       
       return ans;
       
       
   }

