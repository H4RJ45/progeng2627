#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i=0; i<vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}


int main(){
    std::vector<int> v0{};
    std::cout << search_vector(1, v0) << std::endl;
    std::vector<int> v1{1,2,3};
    std::cout << search_vector(1, v1) << std::endl;
    std::vector<int> v2{2,1,3};
    std::cout << search_vector(1, v2) << std::endl;
    std::vector<int> v3{3,2,1};
    std::cout << search_vector(1, v3) << std::endl;

}