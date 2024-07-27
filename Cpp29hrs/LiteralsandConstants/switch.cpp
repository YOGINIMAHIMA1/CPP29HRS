#include <iostream>
using namespace std;
 int main(){
    const int Pen{10};
    const int Marker{20};
    const int Pencil{30};
    const int Rectangle{40};
    const int Circle{50};
    const int Ellipse{60};

     int tool{Rectangle};


     switch(tool){
        case Pen:
        cout<<"tool is pen "<<endl;
        break;
        case Marker:
        cout<<"tool is Marker "<<endl;
        break;
        case Pencil:
        cout<<"tool is pencil"<<endl;
        break;
        case Rectangle:
        cout<<"tool is Rectangle "<<endl;
        break;
        case Circle:
        cout<<"tool is circle"<<endl;
        break;
        case Ellipse:
        cout<<"tool  is Ellipse"<<endl;
        break;
        default:
        cout<<"Does not match any tool"<<endl;


     }

  cout<<"Moving on"<<endl;
 }