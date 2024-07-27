#include <iostream>
#include <limits>
using namespace std;
int main(){
    cout<<numeric_limits<short>::min()<<endl;
    cout<<numeric_limits<short>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;// -2^31
    cout<<numeric_limits<int>::max()<<endl;// 2^31-1
    cout<<numeric_limits<unsigned int>::min()<<endl;
    cout<<numeric_limits<unsigned int>::max()<<endl;//2^32-1
    cout<<numeric_limits<long>::min()<<" to "<<numeric_limits<long>::max()<<endl;
    cout<<numeric_limits<long>::lowest()<<" to "<<numeric_limits<long>::max()<<endl;
    cout<<numeric_limits<float>::min()<<" to "<<numeric_limits<float>::max()<<endl;
    cout<<numeric_limits<float>::lowest()<<" to "<<numeric_limits<float>::max()<<endl;
    cout<<numeric_limits<double>::min()<<" to "<<numeric_limits<double>::max()<<endl;
    cout<<numeric_limits<long double>::min()<<" to "<<numeric_limits< long double>::max()<<endl;
    cout<<boolalpha;
    cout<<numeric_limits<int>::is_signed<<endl;
    cout<<numeric_limits<int>::digits<<endl;
    

}