#include <iostream>


int bigger(int a, int b, int c){
    if (a >= b && a >= c){
        return a;
    }
    else if (b >= a && b >= c){
        return b;
    }
    else if (c >= b && c >= a){
        return c;
    }
    else{return a;}
}
int main(){
    int num1, num2, num3;
    std::cout << "Num1: ";
    std::cin >> num1;
    std::cout << "Num2: ";
    std::cin >> num2;
    std::cout << "Num3: ";
    std::cin >> num3;
    std::cout << "The largest of the 3 is " << bigger(num1, num2, num3) << std::endl;
}