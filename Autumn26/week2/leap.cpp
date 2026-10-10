#include <iostream>

int main(){
    int year;
    std::cout << "YEAR: ";
    std::cin >> year;
    if(year%4 == 0){
        if(year%100==0){
            if(year%400==0){
                std::cout << "LEAP YEAR" << std::endl;
            }
            else{
                std::cout << "NOT LEAP YEAR" << std::endl;
            }
        }
        else{
            std::cout << "LEAP YEAR" << std::endl;
        }
    }
    else{
        std::cout << "NOT  LEAP YEAR" << std::endl;
    }
}