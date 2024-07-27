#include <iostream>
using namespace std;
int main(){
    auto var1{'a'};
    auto var2{1.2};
    auto var3{2.31f};
    auto var4{4.5l};
    auto var5{4.56};
    cout<<var1<<" "<<var2<<" "<<var3<<" "<<var4<<" "<<var5<<endl;


    auto var6{123u};
    auto var7{234ll};
    cout<<sizeof(var6)<<" "<<sizeof(var7)<<endl;
}