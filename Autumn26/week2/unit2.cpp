#include <iostream>
#include <string>

int main(){
    double temp;
    std::string unit_in, unit_out;
    std::cin >> temp;
    std::cin >> unit_in;


    if(unit_in == "F"){
        temp = (temp-32)*5/9;
        unit_out = "C";
    }
    else if(unit_in == "C"){
        temp = 9/5 * temp + 32;
        unit_out = "F";
    }
    else{ 
        std::cout << "ERROR";
    }
    std::cout << temp << " " << unit_out << std::endl;
}