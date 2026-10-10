#include <iostream>

int main(){
    int n, rem;
    std::cout << "Number: " << std::endl;
    std::cin >> n;
    rem = n % 3;
    if(rem==0){
        std::cout << "MULTIPLE OF 3"  << std::endl;
    }
    else{
        std::cout << "NO!!" << std::endl;
    }

}