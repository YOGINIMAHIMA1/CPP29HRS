#include <iostream>
using namespace std;
int main(){
    //>,<,>=,<=,==,!=
    int val1{22};
    int val2{33};
    cout<<val1<<" "<<val2<<endl;
    cout<<boolalpha<<endl;
    cout<<(val1>val2)<<endl;
    cout<<(val1<val2)<<endl;
    cout<<(val1==val2)<<endl;
    cout<<(val1>=val2)<<endl;
    cout<<(val1<=val2)<<endl;
    cout<<noboolalpha;
    cout<<(val1!=val2)<<endl;
    

    bool res=(val1== val2);
    cout<<res<<endl;


}