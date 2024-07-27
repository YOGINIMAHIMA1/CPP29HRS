#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float var{1.238928392830202f};
    double var1{2.356789907655899};
    long double var2{3.689754322689900654332l};

    cout<<setprecision(20);
    cout<<var<<endl;// precision:7
    cout<<var1<<endl;//precision:15
    cout<<var2<<endl;// precision:19
    cout<<sizeof(float)<<" "<<sizeof(double)<<" "<<sizeof(long double)<<endl;

    cout<<sizeof(var)<<endl;
    cout<<sizeof(var1)<<endl;
    cout<<sizeof(var2)<<endl;

    float var3{1245678097.78650f};// narrowing conversion as it will take no upto
    // 7 digit if u will print more it will print chunk no
    cout<<var3;


    float var4{};
    float var5{};
    float res={var4/var5};
    cout<<res<<endl;
    cout<<var4+var5<<endl;
}