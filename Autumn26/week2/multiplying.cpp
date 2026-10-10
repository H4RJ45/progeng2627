#include <iostream>

int main(){
    double num1, num2, sum;
    std::cout << "NUM1: ";
    std::cin >> num1;
    std::cout << "NUM2: ";
    std::cin >> num2;
    sum = num1 * num2;
    std::cout << num1 << " x " << num2 << " = " << sum << std::endl;
}