#include <iostream>
using namespace std;
void func(){
    int var{20};
    // it can only access in this scope
    cout<<var<<endl;//20// stored in stack
    
}
int main(){
       func();
    int  *ptr= new int(10);
    cout<<*ptr<<endl;//10 // stored in heap
   // cout<<var<<endl; //it cannot be accessible here
}