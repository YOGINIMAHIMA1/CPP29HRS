#include <iostream>
using namespace std;
int main(){

int val1{10};
int val2{-33};
cout<<val1<<" "<<val2<<endl;
cout<<sizeof(val1)<<" "<<sizeof(val2)<<endl;


//signed->+,-
//unsigned-> +

signed int val3{-22};
unsigned int  val4{22};
//unsigned int  val4{-22}; --compiler error we are trying to  forcefully make negative value to positive
cout<<val3<<" "<<val4<<endl;



// short and long
 signed short var4{-32768};
 signed short var5{32767};
 unsigned short var6{456};
cout<<var4<<" "<<var5<<" "<<var6<<endl;


cout<<sizeof(short)<<" "<<sizeof(short int)<<" "<<sizeof(signed short)<<" "<<sizeof(signed)<<" "<<sizeof(unsigned)<<endl;
cout<<sizeof(signed short int)<<" "<<sizeof(unsigned short int)<<" "<<sizeof(int)<<" "<<sizeof(signed int)<<" "<<sizeof(unsigned int)<<endl;
cout<<sizeof(long)<<" "<<sizeof(signed long)<<" "<<sizeof(unsigned long)<<" "<<sizeof(long int)<<" "<<sizeof(signed long int)<<endl;
cout<<sizeof(long long)<<" "<<sizeof(long long int)<<" "<<sizeof(signed long long int)<<" "<<sizeof(unsigned long long int)<<endl;

}