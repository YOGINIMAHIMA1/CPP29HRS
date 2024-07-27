#include <iostream>
using namespace std;
 int main(){
    char A{'a'}, B{'n'},C{'a'},D{'m'},E{'i'},F{'k'},G{'a'};
    cout<<A<<B<<C<<D<<E<<F<<G<<endl;
    cout<<sizeof(char)<<" "<<sizeof(A)<<endl;
    cout<<static_cast<int>(A)<<endl;
 }