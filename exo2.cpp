#include <cstdlib>
#include <iostream>


bool est_premier(int n){
    if(n <=1){
        std::cout << "pas premier" <<std::endl;
        return false;
    }
    int i=2;
    bool premier = true;

    while(premier && i<= n-1){
        int reste = n%i;
        if(reste ==0){
            std::cout << "pas premier" <<std::endl;
            premier = false;
        }
        ++i;
    }
    if(premier){
        std::cout << " premier" <<std::endl;
    }
    return premier;
}

int main(){

    const int n = 3;
    est_premier(n);



    return 0;
}