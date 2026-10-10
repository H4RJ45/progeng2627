#include <iostream>

int main(){
    double height, weight, BMI;
    std::cout << "height: " << std::endl;
    std::cin >> height;
    std::cout << "weight: " << std::endl;
    std::cin >> weight;
    BMI = weight / (height * height);
    std::cout << "Your BMI is " << BMI << std::endl;
}
