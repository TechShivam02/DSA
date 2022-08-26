
#include <iostream>
using namespace std;

int main()
{
   
//   int num = 5;
   
//   int * ptr = &num;
   
   
   
//   cout<<num<<endl;  // 5
   
//   cout<<ptr<<endl;   // 100  adress
//   cout<<&num<<endl;  // 100  adress
     
//   cout<<*ptr<<endl; // 5
    
    
        
    // cout<<sizeof(num)<<endl;  //  int data type : 4 bytes
    // cout<<sizeof(ptr)<<endl;  // size of ppointer is always : 8 
    
    // cout<<sizeof(*ptr)<<endl;  // size of pointer variable : 4 bytes
    
    
    
    // int *ptr = 5;  // wrong
    
    // cout<<ptr<<endl;   //   int *ptr = 5;  wrong
    // cout<<*ptr<<endl;  //   int *ptr = 5;  wrong
    
    
    
    // int *ptr = 0;  // intialize with empty    NULL Pointer
    // cout<<*ptr<<endl;  
    
    
    
    /*
    int i=5;
    
    int *q = &i;
    
    cout<<q<<endl;   // 100 
    cout<<*q<<endl;  // 5 
        
        int *p = 0;
        p=&i;
        
    
    cout<<p<<endl;  // 100
    cout<<*p<<endl;  // 5
    
    */
    
    
    /*
    
    int num=5;
    int a=num;
    
    a++;
    
    cout<<num<<endl;
    
    
    
    int *p = &num;
     cout<<num<<endl;  // 5
     (*p)++;   
     cout<<num<<endl;  // 6
     
     */
     
     
     
     /*
     
     
     int num = 5;
     
     int *p =&num;
     
     
     
    //  int *q = *p;  // Error
     int *q = p;
     
     cout<<p<<" --> "<<q<<endl;     // 100    100 
     cout<<*p<<" --> "<<*q<<endl;   // 5   5 
     
     
     (*q)++;
     
     cout<<q<<" --> "<<p<<endl;    // 100 100   adress wont change
     cout<<*q<<" --> "<<*p<<endl;  // 6  6
     cout<<"num : "<<num<<endl;    // 6
     
     
     (*p)++;
     
     cout<<q<<" --> "<<p<<endl;    // 100   100 
     cout<<*q<<" --> "<<*p<<endl;  // 7   7
     cout<<"num : "<<num<<endl;   // 7
     
     
  
     */
     
     
     int i=3;
     int *t = &i;
     
    //  cout<<*t++<<endl;  // 3
     
    //  cout<<++*t<<endl;  // 4
    
    // cout<<(*t)++<<endl; // 3
    
    
    cout<<"before t : "<<t<<endl;    // 100   100->3
    
    t=t+1;
    
    cout<<"After t : "<<t<<endl;   // 104 
    
  
   
   

    return 0;
}