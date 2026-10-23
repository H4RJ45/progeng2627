#include <iostream>

bool leap_year(int year){
    bool ly;

    if(year%100==0){
        if(year%400==0){
            ly = true;
        }
        else{ly = false;}
    }
    else if(year % 4 == 0){
        ly = true;
    }


    return ly;
}

int main(){

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}