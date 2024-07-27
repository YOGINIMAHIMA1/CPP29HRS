#include <iostream>
using namespace std;
 int main(){
    short int var1{22};
    short int var2{32};
      char var3{40};
      char var4{50};

      cout<<var1<<" "<<var2<<endl;
      cout<<var3<<" "<<var4<<endl;
      cout<<sizeof(var1)<<" "<<sizeof(var2)<<endl;
      cout<<sizeof(var3)<<" "<<sizeof(var4)<<endl;

      cout<<var1+var2<<" "<<sizeof(var1+var2)<<endl;
      cout<<var3+var4<<" "<<sizeof(var3+var4)<<endl;
      


 }
 