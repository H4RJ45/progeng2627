#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int inp= 1;
    while (inp != 0){
        std::cout << "Input number (0 to stop): ";
        std::cin >> inp;
        v.push_back(inp);

    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}
