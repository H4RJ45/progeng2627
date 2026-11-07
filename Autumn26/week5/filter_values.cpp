#include <iostream>
#include <vector>

bool less_than(int a, int b){
    if (a < b){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    std::vector<int> v;
    int n, t, inp;
    std::cout << "n: ";
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cout << "Input number: ";
        std::cin >> inp;
        v.push_back(inp);}
    std::cout << "t: ";
    std::cin >> t;
    for (int j=0; j<v.size(); j++){
        if (less_than(v[j], t)){
            std::cout << v[j] << ", ";
        }
    }
    std::cout << std::endl;


}