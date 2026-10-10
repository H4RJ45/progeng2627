#include <iostream>

int main(){
    double celc, fahr;
    std::cout << "Celcius: ";
    std::cin >> celc;
    fahr = 1.8*celc + 32;
    std::cout << celc << " degrees celcius is " << fahr << " degrees fahrenheit" << std::endl;
}