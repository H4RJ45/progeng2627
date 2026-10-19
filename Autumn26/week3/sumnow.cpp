#include <iostream>

int main(){
    int sum=0, n;
    std::cout << "Number: ";
    std::cin >> n;
    sum += n;
    std::cout << "Sum so far is " << sum << std::endl;
    while (n!=0){
        std::cout << "Number: ";
        std::cin >> n;
        sum += n;
        std::cout << "Sum so far is " << sum << std::endl;
    }
}