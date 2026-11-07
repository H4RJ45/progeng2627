#include <iostream>
#include <vector>

int main(){
    std::vector<int> vector;
    int num1, num2, num3;
    std::cout << "Num1: ";
    std::cin >> num1;
    vector.push_back(num1);
    std::cout << "Num2: ";
    std::cin >> num2;
    vector.push_back(num2);
    std::cout << "Num3: ";
    std::cin >> num3;
    vector.push_back(num3);
    std::cout << (vector[0] * (vector[1] + vector[2])) << std::endl;


}