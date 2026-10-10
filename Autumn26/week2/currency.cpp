#include <iostream>

int main(){
    double pounds, euros, rate;
    std::cout << "Pounds: " << std::endl;
    std::cin >> pounds;
    std::cout << "Exchange rate to Euros: " << std::endl;
    std::cin >> rate;
    euros = pounds * rate;
    std::cout << pounds << " pounds is " << euros << " euros" << std::endl;
}