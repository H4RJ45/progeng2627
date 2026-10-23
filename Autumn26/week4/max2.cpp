#include <iostream>


int bigger(int a, int b){
    if (a >= b){
        return a;
    }
    else if (b > a){
        return b;
    }
}
int main(){
    int num1, num2;
    std::cout << "Num1: ";
    std::cin >> num1;
    std::cout << "Num2: ";
    std::cin >> num2;
    std::cout << "The largest of the 2 is " << bigger(num1, num2) << std::endl;
}