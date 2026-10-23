#include <iostream>


double myabs(double x);


int main(){
    int value;
    std::cout << "Value: ";
    std::cin >> value;
    value = myabs(value);
    std::cout << value << std::endl;
}

double myabs(double x){
    if (x<0){
        x = -x;
    }
    return x;
}