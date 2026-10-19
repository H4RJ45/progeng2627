#include <iostream>

int main(){
    int n, answer = 1;
    std::cout << "Number: ";
    std::cin >> n;
    for(int i=n; i>0;i--){
        answer *= i;
    }
    std::cout << "Factorial of " << n << " is " << answer << std::endl;
}