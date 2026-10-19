#include <iostream>

int main(){
    int a, b, c=0, i=0;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    while(i<b){
        c = c+a;
        std::cout << i << " " << c << std::endl;
        i = i+1;
    }
    std::cout << a << "*" << b << "=" << c << std::endl;

}