#include <iostream>
using namespace std;
int main(){
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;
    cout<<"I love c++"<<endl;


    for(int i{};i<5;i++){
        cout<<"I love c++"<<endl;
    }

    for(unsigned int i{0};i<10;i++){
        cout<<"I love c++"<<endl;
    }
    size_t j{};
    for(;j<5;++j){
        cout<<2*j<<" ";
    }
    cout<<endl;
    // size_t------ representation of unsigned int for positive numbers[sizes]

    cout<<sizeof(size_t)<<endl;

    for(size_t i{};i<4;i++){
        cout<<"I love c++ "<<endl;
    }
    size_t COUNT{10};
    for(size_t i{0};i<COUNT;++i){
     cout<<i<<" "<<"I love C++"<<endl;
    }

for(size_t i{0},x{5},y{22};y>15;++i,x+=5,y-=1)
    {
        cout<<i<<" "<<x<<" "<<y<<endl;
    }
}