#include <iostream>
#include <unistd.h>
#include <pthread>
using namespace std;
void* routine(void* arg){
    cout<<"test from threads\n";
}
int main(){
    pthread_t t1;
    if(pthread_create(&t1,NULL,routine,NULL)!=0){
        return 1;
    };
    if(pthread_create(&t2,NULL,routine,NULL)!=0){
        return 2;
    };

    if(pthread_join(t1,NULL)!=0){
        return 3;
    };
    if(pthread_join(t2,NULL)!=0){
        return 4;
    };
    
}