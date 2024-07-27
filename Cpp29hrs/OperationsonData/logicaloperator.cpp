#include <iostream>
using namespace std;
int main(){
    // &&, ||,!=
    //&&--- all condition should be true
    //  ||---any one should be true
    // != -------true become false and false become true


    bool a{true};
    bool b{false};
    bool c{true};
    cout<<a<<" "<<b<<" "<<c<<endl ;
    cout<<(a&&b)<<" "<<(b&&c)<<" "<<(a&&c)<<endl;
    cout<<((a&&b)&&(b&&c))<<" "<<((a&&b)&&(a&&c))<<" "<<((b&&c)&&(a&&c))<<endl;
    //||
    cout<<(a||b)<<" "<<(b||c)<<" "<<(a||c)<<endl;
    cout<<((a||b)||(b||c))<<" "<<((a||b)&&(a||c))<<" "<<((b||c)||(a||c))<<endl;


      //!=
      cout<<(!a)<<" "<<(!b)<<" "<<(!c)<<endl;


      // combining all logical operator
      cout<<boolalpha;
      cout<<((a||b)&&(!c))<<endl;
      // combining logical with relation
      cout<<((a>b && b>=c)||(b!=c||c==a))<<endl;
      cout<<(a||b||c)<<endl;
}