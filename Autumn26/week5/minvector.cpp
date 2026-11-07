#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if (vin.size() ==0){
        return -1;
    }
    int min = 0;
    for (int i=0; i<vin.size(); i++){
        if (vin[i] < vin[min]){
            min = i;
        }
    }
    return min;
}


int main(){
    std::vector<double> v0{};
    std::cout << min_vector_element(v0) << std::endl;
    std::vector<double> v1{1,2,3};
    std::cout << min_vector_element(v1) << std::endl;
    std::vector<double> v2{2,1,3};
    std::cout << min_vector_element(v2) << std::endl;
    std::vector<double> v3{3,2,1};
    std::cout << min_vector_element(v3) << std::endl;

}