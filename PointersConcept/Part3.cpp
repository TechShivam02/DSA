#include <iostream>
using namespace std;


void update(int **pptr){

    // pptr = pptr +1;  // new double pptr = 820 + 1*4 = 824  // No change in original
    
    // *pptr = *pptr +1;  // change in p
    
    **pptr = **pptr +1;
    
}




int main()
{
    
    
    
    int i=5;
    int *ptr  = &i;
    
    int **pptr = &ptr;
    
    
    
    //    820        710      i= 5  // value
    //    940        820       710  // adress
    
    
    //   pptr         ptr          i
    
    
    
    cout<<*pptr<<endl;
    cout<<ptr<<endl;
    
    
cout<<endl;
    
        
        // print 5
        
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**pptr<<endl;

    
    
cout<<endl;


    // print    750
    
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*pptr<<endl;
    
    
    
cout<<endl;
    
    
    // print 820
    
    cout<<&ptr<<endl;
    cout<<pptr<<endl;
    
    
    
    
        // pointer in function
        
        // done   p=p+1  No change
        // *p = *p+1   value update  
        
        
    cout<<endl<<endl;
    
    
    cout<<i<<endl;   // 5
    cout<<ptr<<endl;  // 710
    cout<<pptr<<endl;  // 820
        
        
              
        cout<<endl;
    
  update(pptr);
              
        cout<<endl;
        
                            //    // pptr = pptr+1  No change
    // cout<<i<<endl;  // 5
    // cout<<ptr<<endl;  // 710
    // cout<<pptr<<endl;   // 820
    
    
    
                    // *pptr = *pptr+1;
        
    // cout<<i<<endl;  // 5
    // cout<<ptr<<endl;  // 714
    // cout<<pptr<<endl;   // 820
    
    
    
    
        // **pptr = **pptr+1;
        
    cout<<i<<endl;      // 6
    cout<<ptr<<endl;    // 710
    cout<<pptr<<endl;   // 820
    
    
    
    cout<<endl<<endl;
    
    
    int arr[6]={1,2,3,4};
    
    int *p = arr;
    
    cout<<p<<endl;
    cout<<arr<<endl;
    
    cout<<*p<<endl;
    cout<<*p+1<<endl;
    
    cout<<p[2]<<endl;
    
    
    
    
    
    
    
    // cout<<endl;
    
    
    // char Carr[] ="abcdef";
    // char *b = Carr;
    // cout<<b<<" "<<*b<<" " <<*b+1<<" "<<*b+2<<" "<<endl;  // abcdef a 98 98 
    
    
    
    
    
    
    // cout<<endl;
    
    // char Carr[] ="abcdef";
        
    //     char *b = &Carr[0];
    //     b++;
    
    // cout<<b<<" "<<*b<<" " <<*b+1<<" "<<*b+2<<" "<<endl;  // bcdef b 99 100
    
    
    
    
    
    
    
    
    cout<<endl;
    
    
    char Carr[] ="abcdef";
        
        char *b = &Carr[0];
        b++;
    
    cout<<b<<" "<<*b<<" " <<*b+1<<" "<<*b+2<<" "<<endl;  // bcdef b 99 100
    
    
    
    
    return 0;
}