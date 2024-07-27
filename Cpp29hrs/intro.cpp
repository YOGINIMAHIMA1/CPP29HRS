// first program
#include <iostream>
#include <string>
//function
int sum( int a, int b){ // parameters = a and b
    return a+b;
}
int main(){
    std::cout<<"Hello World"<<std::endl;
    for(int i=0;i<10;i++){
        std::cout<<"Mahima Bhardwaj"<<std::endl;
    }
    // three type of errors
    //compile time-- std::cout<<"compile tim errors:"<<endl ; as you have not mention std:: with endl so it show 
    //compile type error
    //std::cout<<"compile tim errors:"<<std::endl 
    //runtime
   //7/0;
// function call

   std::cout<< sum (2,5)<<std::endl;// 2 & 3 are arguments


   //modern c++11 variable intilization

   int x{22};// variable intialization known as uniform intialization in c++11
   std::cout<<x<<std::endl;

   // clog- record hai jo batata hai what is happening in program
   std::clog<<"John Doe logged in"<<std::endl;/// ex youer server started successfully, ex- "Error: Unable to connect to the database"
   // cerr-   error ko print karta hai
   std::cerr<<"something is wrong in your program"<<std::endl;

   //getline

   char data[30]; 
   std::cin.getline(data,30);
   std::cout<<data<<std::endl;

   std::string AboutYou;
   std::getline(std::cin,AboutYou);
     std::cout<<AboutYou;

}