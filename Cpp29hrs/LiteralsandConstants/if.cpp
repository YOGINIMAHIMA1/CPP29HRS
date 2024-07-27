#include <iostream>
using namespace std;
int main(){
    int num1{33};
    int num2{66};
    bool res=(num1<num2);
    cout<<boolalpha<<res<<endl;
    if(res==true){
        cout<<num1<<" is less than "<<num2<<endl;
            }

    if(!(res==true)){
        cout<<num1<<" is  greater than "<<num2<<endl;
    }


    if(num1>num2){
        cout<<num1<<" is greater than "<<num2<<endl;
    }
    else{
        cout<<num2 <<" is greater than "<<num1<<endl;
    }


    bool red= false;
    bool green{true};
    bool  yellow{false};
    bool police_stop{true};


    if(red){
        cout<<"stop"<<endl;
    }
    if(yellow){
        cout<<"slow";

    }
    if(green){
         cout<<"go";
    }
    cout<<endl;

if(green){
    if(police_stop){
        cout<<"Stop"<<endl;
    }
    else{
        cout<<"Go"<<endl;
    }
}
if(green && !police_stop){
    cout<<"Go";
}
else{
    cout<<"Stop"<<endl;
}

}