#include <iostream>

int main(){
    int num1, num2;
    std::cout << "NUM1: ";
    std::cin >> num1;
    std::cout << "NUM2: ";
    std::cin >> num2;
    for(int i=1; i <= num1; i++){
        for(int j=1; j <= num2; j++){
            std::cout << i*j << "\t";
        }
        std::cout << std::endl;
    }
}