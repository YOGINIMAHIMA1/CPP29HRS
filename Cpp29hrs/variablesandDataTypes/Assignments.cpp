#include <iostream>
using namespace std;
int main(){
    int var1{12};
    cout<<var1<<endl;
    var1=22;
    cout<<var1<<endl;
    float var2{22.3f};
    cout<<var2<<endl;
    var2=22.312323f;
    cout<<var2<<endl;
   bool var3{false};
   cout<<boolalpha<<var3<<endl;
   var3=true;
   cout<<boolalpha<<var3<<endl;
   auto var4{22u};
   cout<<var4<<endl;
   var4=-33;
   cout<<var4<<endl;//random garbage  value because u have convert unsigned means +ve value to negative forcefully

}