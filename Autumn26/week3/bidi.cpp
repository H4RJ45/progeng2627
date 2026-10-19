#include <iostream>

int main(){
    int n, i=0;
    std::cout << "n: ";
    std::cin >> n;
    while(i < n){
        int j=0;
        while(j < n){
            std::cout << "*";
            j += 1;
        }
        std::cout << std::endl;
        i += 1;
    }
}