#include <iostream>
using namespace std;
int main(){
    // precedence *,/,% ----- same precedence and greater than +,- they have same precedence
    // THESE ALL HAVE ASSOCIATIVITY LEFT TO RIGHT
    int a{11};
    int b{2};
    int c{6};
    int d{12};
    int e{2};
    int f{23};
    int res= a+b*c-d/e+f;//     11+12-6+23       -- left to right  17+23-----40
        cout<<res<<endl;
        res= a/b*c+d-e+f;//63
        cout<<res<<endl;
        res=(a*b)+(c-d)*e/f;//(22)+(-6)*0-------  22-0---------   22
        cout<<res<<endl;
}