#include <iostream>
using namespace std;



              //  Check from the Main Function 




void print(int *p){
    
    cout<<p<<endl;  // adres
    cout<<*p<<endl;  // 5  value
    
    
}

void update(int *p){   //   
    
                    
                    // int *p = Adress = 100 ;
                    
                    
    p=p+1;
    
    
    
    cout<<"Inside func : "<<p<<endl;  // 104 same
    
    cout<<"Inside func : Value :  "<<*p<<endl;  // garbage value
    
     
     
     *p = *p + 1;
     
    cout<<"Inside func : After inc "<<p<<endl;  // 104  same
    
    cout<<"Inside func : After inc , Value :  "<<*p<<endl;  // garbage value
    
}




void update1(int *p){   //   
    
     *p = *p + 1;
    
    cout<<"Inside func : After inc , Value :  "<<*p<<endl;  // 6
    
}


void getSum(int *arr){
        
        cout<<sizeof(arr)<<endl;    // 8    //  not  4 * no of ele  // when passed in func  act as pointer  ,   pointer  ka size = 8
        
                // i.e int *arr   coming as
}



void getUpdate(int arr[] ){
    
            cout<<*arr<<endl; 

}


int main()
{
  
  int val = 5;
  
  int *p = &val;
  
  print(p);
  
  
  cout<<"Before : "<<p<<endl;  // 100
  cout<<"Before , Value  : "<<*p<<endl;  // 100
          
    //   update(p);

//   cout<<"After : "<<p<<endl;  // 100
//   cout<<"After , Value  : "<<*p<<endl;  // 100
  
  
  update1(p);
  
  
  cout<<"After : "<<p<<endl;  // 100
  cout<<"After , Value  : "<<*p<<endl;  // 100
  
      
      
      
      cout<<endl;
      
  
  
  int arr[6] = {1,2,3,4,5,6};
  
  getSum(arr);
  
  
  cout<<endl;
  
  
  getUpdate(arr+2);   //  adress passed  of ele 3
  getUpdate(arr+3);   //  adress passed  of 4
  getUpdate(arr+4);   //  adress passed  of 5
  
  
  
  
  
  
  
  
    return 0;
}