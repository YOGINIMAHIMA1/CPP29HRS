#include <iostream>
using namespace std;
int main(){
int *ptr{new int };// junk value
int *ptr1{ new int (22)};  // direct intialization
int *ptr2{new int (33)}; //uniform intialization
cout<<*ptr<<" "<<ptr<<endl;// junkvalue   memory address
cout<<*ptr1<<" "<<ptr1<<endl; //22        mem address
cout<<*ptr2<<" "<<ptr2<<endl; //33         mem address


//Release memory
delete ptr;// This line deallocates the memory that ptr points to.
//After this operation, the memory is freed and 
//ptr becomes a dangling pointer (a pointer that points to a location in memory that is no longer valid).
delete ptr1;
delete ptr2;

ptr=nullptr;// By setting ptr to nullptr, you ensure that it does 
//not point to an invalid memory location, which can help prevent bugs and undefined behavior in your program.

//Avoiding Dangling Pointers: After freeing the memory with delete, 
//the pointer still holds the old address, which is now invalid. Setting it to nullptr ensures that it doesn't accidentally get used to access invalid memory.


// reuse pointer
ptr= new int{22};
cout<<*ptr<<" "<<ptr<<endl;// 22 mem addr

delete ptr;
ptr =nullptr;

//calling delete twice is BAD!
ptr1= new int {23};
cout<<*ptr1<<endl;
delete ptr1;
//delete ptr1;

 int *ptr_num1 {nullptr}; // it means it is not pointing to any  valid memory location
 ptr_num1= new int;
 *ptr_num1= 77;
 cout<<ptr_num1<<" "<<*ptr_num1<<endl;// mem addr 77
 delete ptr_num1;
 cout<<ptr_num1<<" "<<*ptr_num1<<endl; // bad practice after deleting ypu are trying to access it again it will show garbage val
  ptr_num1= nullptr;
  // reuse
  ptr_num1= new int(78);
  cout<<*ptr_num1;
}
