#include <iostream>

double area(double l, double w){
    return l*w;
}

double perimeter(double l, double w){
    return 2*(l+w);
}

int main(){
    double l, w;
    std::cout << "length: ";
    std::cin >> l;
    std::cout << "width: ";
    std::cin >> w;
    std::cout << "Perimeter is " << perimeter(l, w) << " and area is " << area(l,w) << std::endl;
}