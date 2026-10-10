#include <iostream>

int main(){
    double num;
    std::cout << "NUMBER: " << std::endl;
    std::cin >> num;
    if(num < 0) {
        num = -num;
    }
    std::cout << "ABSOLUTE VALUE IS |" << num << "|" << std::endl;

}