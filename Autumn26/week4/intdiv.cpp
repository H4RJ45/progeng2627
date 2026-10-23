#include <iostream>

int intdiv(int a, int b){
    return a/b;
}

int main(){
    int a, b;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << a << "/" << b << " = " << intdiv(a,b);
}