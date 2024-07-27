#include <iostream>
using namespace std;
int main(){
    bool red_light{false};
    bool green_light{true};
    if(red_light==true){
       cout<<"stop"<<endl;
    }
    else{
       cout<<" no-stop" <<" "<<endl;
    }
    if(green_light){
        cout<<"go "<<endl;
    }
    else{
        cout<<"stop"<<endl;
    }
    cout<<boolalpha<<endl;// it is used so that boolean value does not print in 0 or 1 it will print as false or true
    cout<<red_light<<endl;
    cout<<green_light<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(red_light)<<endl;
    cout<<sizeof(green_light)<<endl;
}   