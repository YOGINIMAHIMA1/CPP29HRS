#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"Hello"<<endl;
    cout<<"World"<<endl;
    cout<<"Hello\n";
    cout<<"World\n";

    cout<<"Unfortunated table"<<endl;
    cout<<"Daniel"<<" "<< "Gray"<<"25"<<endl;
    cout<<"stanley"<<" "<< "Woods"<<"33"<<endl;
    cout<<"Jordan"<<" "<< "Parker"<<"45"<<endl;
    cout<<"Joe"<<" "<< "Balls"<<"21"<<endl;
    cout<<"Josh"<<" "<< "Carr"<<"27"<<endl;
    cout<<"Izaiah"<<" "<< "Robinson"<<"29"<<endl;


   
    cout<<"Unfortunated table"<<endl;
    cout<<"Daniel"<<" "<<"Gray"<<setw(6)<<"25"<<endl;
    cout<<"stanley"<<" "<<"Woods"<<setw(6)<<"33"<<endl;
    cout<<"Jordan"<<" "<<"Parker"<<setw(6)<<"45"<<endl;
    cout<<"Joe"<<" "<<"Balls"<<setw(6)<<"21"<<endl;
    cout<<"Josh"<<" "<<"Carr"<<setw(6)<<"27"<<endl;
    cout<<"Izaiah"<<" "<<"Robinson"<<setw(6)<<"29"<<endl;

    
    cout<<right<<endl;
    cout<<"Daniel"<<" "<<"Gray"<<setw(9)<<"25"<<endl;
    cout<<"stanley"<<" "<<"Woods"<<setw(9)<<"33"<<endl;
    cout<<"Jordan"<<" "<<"Parker"<<setw(9)<<"45"<<endl;
    cout<<"Joe"<<" "<<"Balls"<<setw(9)<<"21"<<endl;
    cout<<"Josh"<<" "<<"Carr"<<setw(9)<<"27"<<endl;
    cout<<"Izaiah"<<" "<<"Robinson"<<setw(9)<<"29"<<endl;


     cout<<setfill('_')<<endl;
    cout<<"Lastname"<<" " <<"FirstName"<<setw(5)<<"age"<<endl;
    cout<<"Daniel"  <<" "<<"Gray"      <<setw(11)<<"25"<<endl;
    cout<<"stanley" <<" "<<"Woods"     <<setw(9)<<"33"<<endl;
    cout<<"Jordan"  <<" "<<"Parker"    <<setw(9)<<"45"<<endl;
    cout<<"Joe"     <<" "<<"Balls"     <<setw(13)<<"21"<<endl;
    cout<<"Josh"    <<" "<<"Carr"      <<setw(13)<<"27"<<endl;
    cout<<"Izaiah"  <<" "<<"Robinson"  <<setw(7)<<"29"<<endl;


// showpos  ,noshowpos
int var1{22};
int var2{-55};
cout<<showpos;
cout<<var1<<setw(6)<<var2<<endl;
cout<<noshowpos;
cout<<var1<<setw(6)<<var2<<endl;

long  a{34667867};
int b{-45686};
long long c{676977554l};

cout<<a<<" "<<b<<" "<<c<<endl;
cout<<showbase;
cout<<dec<<a<<endl;
cout<<oct<<b<<endl;
cout<<hex<<c<<endl;


cout<<noshowbase;
cout<<dec<<a<<endl;
cout<<oct<<b<<endl;
cout<<hex<<c<<endl;

cout<<uppercase;
cout<<dec<<a<<endl;
cout<<oct<<b<<endl;
cout<<hex<<c<<endl;

cout<<nouppercase;
cout<<dec<<a<<endl;
cout<<oct<<b<<endl;
cout<<hex<<c<<endl;

float a1=56.0;
float b1=66.5;
 float c1=90.6;


cout<<showpoint;
cout<<a1<<endl;
cout<<b1<<endl;
cout<<c1<<endl;


cout<<noshowpoint;
cout<<a1<<endl;
cout<<b1<<endl;
cout<<c1<<endl;

double val{1.234532728345938292038201};
double val1{2006.0};
double val2{1.34e-10};
//cout<<fixed;
cout<<val<<endl;
cout<<val1<<endl;
cout<<val2<<endl;

cout<<fixed;
cout<<val<<endl;
cout<<val1<<endl;
cout<<val2<<endl;

cout<<scientific;
cout<<val<<endl;
cout<<val1<<endl;
cout<<val2<<endl;




} 