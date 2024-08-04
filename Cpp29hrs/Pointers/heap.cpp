#include <iostream>
using namespace std;
int main(){
    int *a= new int(10);
    cout<<a<<endl;
    delete a;// after using this variable delete it and free the memory because it is store the memory address of 10
    // 10 is stored in heap so 10 will not be deleted we need to manually delete it while in stack when program
    // goes out of score memory data get automatically deleted.

    // if you dont want to delete manually you can use smart pointer to free the memory and delete it automatically without
    // deleting manually
}