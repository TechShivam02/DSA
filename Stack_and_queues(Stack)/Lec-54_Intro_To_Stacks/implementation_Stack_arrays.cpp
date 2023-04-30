#include<iostream>
using namespace std;

class stack{


    public:

        int *arr;
        int top;
        int size;

    stack(int newSize){
        this->size = newSize;
        arr = new int[size];

        top =- 1;

    }



    void push(int ele){

        if(top < size-1){   // if top >= size   it means overflow
            top++;
            arr[top] = ele;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }


    void pop(){

            if(top >=0 ){
                top--;
            }

            else{
                cout<<"Stack UnderFlow"<<endl;
            }

    }


    int peek(){

        if(top <0){
            cout<<"No Ele present "<<endl;
            return -1;
        }

        else{
            return arr[top];
        }



    }

    bool isEmpty(){

        if(top == -1){
            return true;
        }

        return false;

    }


    int getSize(){

       return top+1;
    }



};


int main(){




    stack stk(5);
    
    
    cout<<"Size : "<<stk.getSize()<<endl;
    
    cout<<stk.peek()<<endl;



    stk.push(10);
    stk.push(20);
    stk.push(30);

    

    cout<<stk.peek()<<endl;


    stk.pop();
     

    cout<<stk.peek()<<endl;

    cout<<stk.isEmpty()<<endl;



    stk.pop();
    

    stk.pop();



    cout<<stk.peek()<<endl;

    cout<<stk.isEmpty()<<endl;

    

    stk.pop();  // underflow
    

    cout<<endl;

    
    stk.push(10);
    stk.push(20);
    stk.push(30);

    
    cout<<"Size : "<<stk.getSize()<<endl<<endl;




    stk.push(40);
    stk.push(50);
    





    cout<<"Size : "<<stk.getSize()<<endl;



     stk.push(100); 



    cout<<stk.peek()<<endl;

    

     stk.push(100);





     


    


     
    return 0;
}