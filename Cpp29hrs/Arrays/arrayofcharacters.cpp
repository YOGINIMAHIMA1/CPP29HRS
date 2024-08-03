#include <iostream>
using namespace std;
int main(){
   // char word[5]{'h','e','l','l','o'};
   char word[6]{'h','e','l','l','o','\0'};
   
    for(auto i:word){
        cout<<i<<" ";
    }
    cout<<endl;
    // change one character
     word[1]={'y'};
     for(auto i:word){
     cout<<i;
     }
     cout<<endl;


     // without \0
     cout<<word<<" "<<endl;// hylloo≤■a  --it will print garbage value at e nd because we have not put null chaacter 
     // at end during intialization

     // it there is null at end of string 
     // null termination at end is called c-string
     // char arr[5]{'h,'y','l','l','o','\0'}
     cout<<word<<" "<<endl;// hyllo


     char word3[4] {'h','e','l'};
     cout<<word3<<" "<<endl;
     cout<<sizeof(word3)<<endl;
     char w2[4] {'h','e','l'};
     cout<<w2<<" "<<endl;
     cout<<sizeof(w2)<<endl;// including size of null character so total size=4

     char w4[] {'h','a','\0'};
     cout<<w4<<endl; 
     cout<<sizeof(w4)<<endl;//3- size of char is 1 so total size is 3 

     char w5[]{'h','i'};
     cout<<w5<<" "<<sizeof(w5)<<endl;// it will print garbage value at end 

  char w6[]{"hi"};
  cout<<w6<<" "<<sizeof(w6)<<endl;// hi size of char is 1 byte so total size is 3

  int num[]{1,2,3,4,5};
  cout<<num<<endl;//  print address
  cout<<num[2]<<endl;//3
  cout<<num[6]<<endl;// garbage value
  num[6]=33;
  cout<<num[6]<<endl;//33
  cout<<num<<endl;// print  address


}