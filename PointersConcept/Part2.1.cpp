#include <iostream>
using namespace std;


int main()
{

    int arr[10];
    
    cout<<"Adress of first memory Block : "<<arr<<endl;   //  base adress of the array  100
    cout<<"Adress of Location 0  : "<< &arr[0]<<endl;   // 100
    
    cout<<" value at 0 index : "<< arr[0]<<endl;   // any garbage value or 0
    
    cout<<"*arr : "<<*arr<<endl;  //  at base adress jo value pdi hai    // here garbage value 
    
    
    int arr1[10] = {2,3,4,5,6};
    
    cout<<"*arr1 : "<<*arr1<<endl;  // 2 
    cout<<"*arr1 : "<< *(arr1 + 1) <<endl;  // arr1 = base adress   1 positio  +1   2nd position  *  ==> value at 2nd pos : 3
    
    cout<<"*arr1 : "<< *arr1 + 1 <<endl;  // +base adress --> value +1  : 2+1 = 3
    
    
    
     cout<< *(arr1 + 1) <<endl;    // 3
     cout<< *(arr1 + 2) <<endl;    // 4
     cout<< *(arr1 + 3) <<endl;    // 5
     cout<< *(arr1 + 4) <<endl;    // 6
     cout<< *(arr1 + 5) <<endl;    // 0
     
            // Common Formulla
            

    //  arr[i] = *(arr+i);     Or     i[arr] = *(i+arr) 
    
    
    
    
    int *ptr1 = arr1;            // size of arr    ele * 4bytes = 20 bytes
    cout<<"------>"<<*ptr1<<" "<<endl;   // output : 2 , size of ptr = 8bytes
    
    
    
    
    int temp[10]; 
    cout<<sizeof(temp)<<endl;  // 40 
    
    int *ptr = temp;
    
    cout<<sizeof(ptr)<<endl;   // 8 bytes
    cout<<sizeof(*ptr)<<endl;  // 4 bytes
    
    cout<<"omomomom : "<<sizeof(*temp)<<endl;  // base add p  value pdi hai  , uska size  4 bytes
    cout<<sizeof(&temp)<<endl;  // 8   i.e  LikeWise : pointer 
    
    
    
    
    
    int temp1[20] = {1,2,3,4,5};
    
    cout<<&temp1[0]<<endl;   // 100
    cout<<&temp1<<endl;  // 100
    cout<<temp1<<endl;  // 100
    
    
            cout<<endl;
            
    
    int *p = temp1;
    
    cout<<p<<endl;  //100
    cout<<*p<<endl;  // 1
    cout<<"adress of pointer : " <<&p<<endl;  // pointer ka adress 200
    
    
       cout<<endl;
    
    
    // Symbol table ka content  , Can't be changed 
    
    
    
    int temp2[10] = {1,2,3,4,5};
    
    
    // temp2=temp2+1;  // Error 
    
    int *pp = temp2;   //     lets say base adress: 100    *pp = 1  
    
    cout<<" --> "<<pp<<" , val : " <<*pp<<endl;   // 100 1
    
        pp=pp+1;   // 100 + 1*4 = 104
    
    cout<<" --> "<<pp<<" , val : " <<*pp<<endl;   // 104  2
    
    
    cout<<temp2[1]<<endl;
    
    
    cout<<temp2<<endl;    // 100 base
    cout<<&temp2<<endl;   // 100 baser
    cout<<*temp2<<endl;   // base p jo value pdi hai   ,,   1
    
    
    
    
    
     char ch[6] = "abcde";
     char *c = &ch[0];
     
     cout<<c<<endl;   // abcde   print entire string in char arrray    // starting from base adress and print until NULL char 
     cout<<*c<<endl;   // a
     
    
    
    char b = 'z';
    char *btr = &b;
    
    cout<<btr<<endl;     // Starting from base adress of  b   and until found null char 
    
    return 0;
}