#include <cstdlib>
#include <iostream>


void est_premier(const int n){
    if (n<= 1){
        std::cout << "pas premier"<< std::endl;
    }

    for (int i=2;i<= n-1;i++){
        int reste = n%i;
        if(reste ==0){
            std::cout <<"pas premier"<<std::endl;
        }
    }
    std::cout << "premier"<<std::endl;
}

int main(){

    const int n = 2000;
    est_premier(n);



    return 0;
}