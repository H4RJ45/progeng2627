#include <iostream>

int main(){
    int max, min, n;
    std::cout << "n: ";
    std::cin >> n;
    max= n;
    min = n;
    while(n!=0){
        std::cout << "n: ";
        std::cin >> n;
        if(n > max){
            max = n;
        }
        if(n < min){
            min = n;
        }
        std::cout << "Max is " << max << " and min is " << min << std::endl;
    }
}