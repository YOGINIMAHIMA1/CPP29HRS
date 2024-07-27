#include <iostream>
using namespace std;
int main(){
    //Braced intializers
    int elephant_count;// store garbage value
    int lion_count{};// intializes to zero
    int dog_count{10};//  intializes to 10
    int cat_count{15};// intializes to 15
    //expression as intializer
    int animal={dog_count+cat_count};
    //
   // int new_number{doesnt_exist};
   // int conversion{2.4};//narrow intialization will throw error it means converting big data type to small
    cout<<elephant_count<<endl;
    cout<<lion_count<<endl;
    cout<<dog_count<<endl;
    cout<<cat_count<<endl;
    cout<<animal<<endl;

    //functional intialization
    int apple_count(5);
    int orange_count(10);
    int fruit(apple_count+ orange_count);
   // int bad_intialization(x+y);
   // data loss.less safe than braced intializer
    int narrowing_conversion(2.8);
    cout<<apple_count<<endl;
    cout<<orange_count<<endl;
    cout<<fruit<<endl;
    cout<<narrowing_conversion<<endl;
    // Assignment Intializer
    int a=10;
    int b=20;
    int c=a+b;
    int narrowing_intialization1= 2.56;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<narrowing_intialization1<<endl;
}