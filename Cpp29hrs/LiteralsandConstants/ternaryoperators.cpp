#include <iostream>
using namespace std;
int main(){
    int a{10};
    int b{20};



    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    (a>b)? cout<<a: cout<<b;

}