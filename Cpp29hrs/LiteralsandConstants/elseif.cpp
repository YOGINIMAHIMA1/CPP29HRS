#include <iostream>
using namespace std;
 int main(){
    //Tools

    const int Pen{10};
    const int Marker{20};
    const int Pencil{30};
    const int Rectangle{40};
    const int Circle{50};
    const int Ellipse{60};

    int tool=Pencil;

    if(tool==Pen){
        cout<<"Tool is Pen "<<endl;
    }
          else if(tool==Pencil){
        cout<<"Tool is Pencil "<<endl;
          }
          if(tool==Marker){
        cout<<"Tool is Marker "<<endl;
          }
          if(tool==Circle){
        cout<<"Tool is Circle "<<endl;
          }
           if(tool==Ellipse){
        cout<<"Tool is Ellipse"<<endl;
           }
      
  
 }