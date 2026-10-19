#include <iostream>

int main(){
    double input, loop, divisor, quotient, remainder=0;
    std::cout << "Num1: ";
    std::cin >> input;
    remainder = input;
    std::cout << "Num2: ";
    std::cin >> divisor;
    while (remainder >= divisor){
        remainder -= divisor;
        quotient += 1;
    }
    std::cout << input << " / " << divisor << " = " << quotient << " remainder " << remainder << std::endl;
}