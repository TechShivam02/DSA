
#include <queue>
#include <iostream>

using namespace std;



int main()
{
   queue<int> q;
   
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   
   
   
   //       10 20 30 40 
   
   cout<<"size : "<<q.size()<<endl<<endl;   // 4
   
   cout<<"front : "<<q.front()<<endl;   // 10
   cout<<"back : "<<q.back()<<endl;   // 40
   
   cout<<endl;
   
   
   cout<<"Is Empty "<<q.empty()<<endl;
   
   
   cout<<endl;
   
   
   /*
   
       while(!q.empty()){
           
           cout<<q.front()<<" ";
           
           q.pop();
       }
       
   
   cout<<endl<<endl;
   
       
       cout<<"size : "<<q.size()<<endl;   // 4
       
       cout<<"Is Empty : "<<q.empty()<<endl;
   
   
   */
   
   
   queue<int> temp  = q;
   
       while(!temp.empty()){
           cout<<temp.front()<< "  ";
           
           temp.pop();
           
       }
   
   cout<<endl;
   
   
   queue<int> q1,q2;
   
   q1.push(1);
   q1.push(2);
   q1.push(3);
   q1.push(4);
   
     
   q2.push(10);
   q2.push(20);
   q2.push(30);
   q2.push(40);
   
   
   q1.swap(q2);
   
        
        
                    cout<<endl<<endl;
        
        
        
        while(!q2.empty()){
           
           cout<<q2.front()<<" ";
           
           q2.pop();
       }
       
       
       
       
   
   
   
   
   
        

    return 0;
}