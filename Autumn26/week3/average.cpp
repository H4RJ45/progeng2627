#include <iostream>

int main(){
    double average, sum=0, n=1, input;
    std::cout << "Number: ";
    std::cin >> input;
    sum += input;
    average = sum/n;
    std::cout << "Average so far is " << sum << std::endl;
    while (input!=0){
        std::cout << "Number: ";
        std::cin >> input;
        sum += input;
        n += 1;
        average = sum/n;
        std::cout << "Average so far is " << average << std::endl;
    }
}