#include <iostream>

int main(){
    int n, counter =0;
    std::cout << "NUMBER: ";
    std::cin >> n;
    while (counter < n) {
        std::cout << "HELLO WORLD" << std::endl;
        counter = counter +1;
    }
}