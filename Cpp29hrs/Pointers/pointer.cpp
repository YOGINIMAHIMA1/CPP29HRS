#include <iostream>
using namespace std;
int main(){
    //Declare and intialize with null ptr
    int *p{};// will intialize with null ptr
    double* fractional_number{};

    //explicitly intialize with nullptr
    int * p1{nullptr};
    double* fractional_number1{nullptr};

    cout<<sizeof(int)<<endl;//4
    cout<<sizeof(double)<<endl;//8
    cout<<sizeof(int*)<<endl; //8
    cout<<sizeof(double*)<<endl;//8
    cout<<sizeof(*p)<<endl;//4
    cout<<sizeof(*fractional_number1)<<endl; //8 as this variable is of type double so it will treated as sizeof(double)
  int p4{22},*p3{&p4} ;// 44 0x61fde4(memory address of another variable)
  
  cout<<sizeof(p3)<<" "<<sizeof(p4)<<endl;// 4 4
  //cout<<(p4)<<" "<<(p3)<<endl;// 4 8


  int p_int {43};
  int *var {&p_int}  ;
  cout<<p_int<<" "<<var<<endl;// 43   0x61fde8(memory address of p_int)


  int var2{44};
  var = &var2;// store memory address of another variable
  cout<<var2<<" "<<var<<endl; // 

  int* ptr{};
  double ptr1{22};

 // ptr= &ptr1;   //error: cannot convert 'double*' to 'int*' in assignment
 // cout<<ptr<<endl;  // compile error 

// Accessing/ Derefrencing a Pointer
int *ptr3;
int ptr4 {34};
ptr3= &ptr4;
cout<<*ptr3 <<" "<<ptr4<<endl;// 34 34


char *p_char_var {nullptr};
char char_var {'A'};
p_char_var= &char_var;
cout<<*p_char_var<<endl;
char char_var1{'C'};
p_char_var=&char_var1;
cout<<*p_char_var<<endl;
// C-string
//char *ptr_to_char {"Hello World"};
//cout<<ptr_to_char<<" "<<*ptr_to_char<<endl;  // warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
//Breakdown of the Warning
//ISO C++ forbids: This part of the message indicates that the C++ standard does not allow the action being performed.

//*converting a string constant to 'char'**: This specifies the exact issue. You are trying to convert a string literal (a constant string) to a char* type. String literals in C++ are immutable and should not be modified. The type of a string literal is const char[].

//[-Wwrite-strings]: This part of the message indicates the specific compiler warning flag related to writable strings. The -Wwrite-strings flag is used to enable this warning in compilers like GCC.
/*
String literals are stored in a read-only section of memory, 
so attempting to modify them can lead to undefined behavior or runtime errors.
 By trying to assign a string literal to a non-const char*, 
you are implying that the string can be modified, which is not safe.


*/

const char*  msg{"hello"};
cout<<msg<<" "<<*msg<<endl;
//msg[0]='P'; // this is not allowed to modify the string literl error: assignment of read-only location '* msg'


//*msg="B";// err- error: assignment of read-only location '* msg'
// msg="Bhature" //This line changes the pointer msg to point to a new string literal "Bhature".
// This is allowed because we are
// not modifying the contents of the string literal; 
//we are only changing the pointer to point to a different string.

//reason ---- Initialization: When you declare a variable and initialize it at the same time, you can use the brace-initialization syntax. For example:




    // msg {"Bhature"};  // This line is incorrect and will cause a compilation error

    
/*
Why msg {"Bhature"}; is Incorrect for Assignment
Syntax Error: The syntax msg {"Bhature"}; is interpreted by the compiler as an attempt to reinitialize msg with a new value using brace-initialization, which is not allowed after the variable has already been declared.
C++ Rules: According to C++ rules, once a variable has been declared and initialized, 
you must use the assignment operator = to change its value.
Correct Way to Reassign
To reassign a pointer or change its value after it has been initialized, use the assignment operator =:
*/
/*
Summary
Use brace-initialization {} for initializing variables.
Use the assignment operator = for reassigning or changing the value of already declared variables.
The syntax msg {"Bhature"}; 
is invalid for reassignment and will result in a compilation error. 
Instead, use msg = "Bhature"; for reassignment.
*/

//msg {"Bhature"};// not allowd
msg ="BHATURE";

cout<<msg<<" "<<*msg<<endl;// 

char msg1[]{"hello"};
msg1[0]='P';
cout<<msg1<<" "<<*msg1<<endl;// Pello P
}