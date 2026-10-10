#include <iostream>

int main(){
    int side1, side2, perimeter, area;
    std::cout << "Side 1: " << std::endl;
    std::cin >> side1;
    std::cout << "Side 2: " <<std::endl;
    std::cin >> side2;
    perimeter = (side1 + side2) * 2;
    area = side1 * side2;
    std::cout << "Perimeter is " << perimeter << " and area is " << area << std::endl;
}