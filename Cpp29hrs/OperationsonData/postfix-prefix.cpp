#include <iostream>
using namespace std;
int main(){
    int val=5;
    val=val+1;
    cout<<val<<endl;//6
   // val=val++;
    //cout<<val<<endl;
    val=val-1;
    cout<<val<<endl;//5
    val=7;// it become 8
    cout<<val++<<endl;// but print 7 as first print then increment
    cout<<val<<endl;//8
    cout<<val--<<endl;// 8-----print 8 but change to 7
    cout<<val<<endl;// 7
    val=8;
    cout<<--val<<endl;//7
    ++val;//8
    cout<<val<<endl;//8

}