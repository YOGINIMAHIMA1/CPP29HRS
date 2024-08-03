#include <iostream>
using namespace std;
int main(){
    size_t arr[10],n;
    cin>>n;
    // to find specific array value
    cout<<arr[0]<<" "<<arr[1]<<endl;

    //using for loop
    for(size_t i{0};i<n;i++){
        cout<<i<<" ";
    }
  cout<<endl;
    double salaries[10] {10.2,9.2,12.3,8.1,8.2};
    size_t i{};
    for(;i<n;i++){
        cout<<salaries[i]<<" ";
    }
    cout<<endl;

    //If you dont intialize rest of value they will intialize to 0

    size_t arr1[5]={10,20,30};
    //range based loop
    for(auto j:arr1){
        cout<<j<<" ";
    }
    cout<<endl;

// sum of all values in array
    
    size_t   add[5] ={10,20,30,40}
    , sum{};
      for(auto k:add){
        sum+=k;

      }
      cout<<sum<<" ";
    }