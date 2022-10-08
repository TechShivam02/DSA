#include<iostream>
#include<stack>

using namespace std;

int main(){


    string str = "abcd";
        

    string ans="";

    stack<char> stk;

    for(int i=0;i<str.length();i++){
        stk.push(str[i]);
    }

    while(!stk.empty()){
        ans += stk.top();
        stk.pop();
    }

    cout<<"Ans : "<<ans<<endl;

    return 0;
}
